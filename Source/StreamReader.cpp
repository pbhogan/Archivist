#include "StreamReader.h"
#include <sstream>

namespace Archivist
{


static std::string decode_string( const std::string & str )
{
	std::ostringstream out;
	for (std::string::const_iterator i = str.begin(); i != str.end(); ++i)
	{
		if (*i == '&')
		{
			i++;			
			switch (*i)
			{
				case 'a':
					i++;
					if (*i == 'p')
					{
						i++; if (*i != 'o') throw std::exception();
						i++; if (*i != 's') throw std::exception();
						i++; if (*i != ';') throw std::exception();
						out << '\'';
					}
					else if (*i == 'm')
					{
						i++; if (*i != 'p') throw std::exception();
						i++; if (*i != ';') throw std::exception();
						out << '&';
					}
					else
					{
						throw std::exception();
					}
					break;
				
				case 'l':
					i++; if (*i != 't') throw std::exception();
					i++; if (*i != ';') throw std::exception();
					out << '<';
					break;
					
				case 'g':
					i++; if (*i != 't') throw std::exception();
					i++; if (*i != ';') throw std::exception();
					out << '>';
					break;
				
				case 'q':
					i++; if (*i != 'u') throw std::exception();
					i++; if (*i != 'o') throw std::exception();
					i++; if (*i != 't') throw std::exception();
					i++; if (*i != ';') throw std::exception();
					out << '"';
					break;
					
				case '#':
					{
						i++;
						std::string ord;
						while (*i >= '0' && *i <= '9')
						{
							ord += *i;
							i++;
						}
						if (ord.empty()) throw std::exception();
						if (*i != ';') throw std::exception();
						out << (char) atoi( ord.c_str() );
					}
					break;

				default: 
					out << '&';
					break;
			}
		} 
		else
		{
			out << *i;
		}
	}

	return out.str();
}


static Unknown CreateType( Type::Enum type )
{
	if (type < Type::Null || type >= Type::End) 
	{
		throw Exception( "Illegal type ID." );
	}

	static const Unknown types[] = {
		Null(),
		Object(),
		Array(),
		Unsigned(),
		Signed(),
		Float(),
		Boolean(),
		String()
	};

	return types[type];
}


Type::Enum StreamReader::PeekType( void )
{
	Type::Enum nextType = Type::End;
	std::streampos bookmark = stream.tellg();
	ConsumeWhiteSpace();
	Consume( "<" );
	switch (stream.peek())
	{	
		case 'i': 
			Consume( "integer>" );
			nextType = (stream.peek() == '-') ? Type::Signed : Type::Unsigned;
			break;
		
		case 'r':
			nextType = Type::Float;
			break;
		
		case 's':
			nextType = Type::String;
			break;
		
		case 't':
		case 'f':
			nextType = Type::Boolean;
			break;
			
		case 'a':
			nextType = Type::Array;
			break;
		
		case 'd':
			Consume( "d" );
			nextType = (stream.peek() == 'i') ? Type::Object : Type::Null;
			break;
	}
	
	stream.seekg( bookmark );

	if (nextType == Type::End)
	{
		std::string e = "Expected to find a type tag here and found '";
		e += GetContext();
		e += "' instead.";
		throw Exception( e );
	}

	return nextType;
}


StreamReader::StreamReader( std::istream & stream )
: stream( stream )
{
}


void StreamReader::Visit( Unknown & unknown ) 
{
	ConsumeWhiteSpace();
	Type::Enum type = PeekType();
	if (unknown.Type() != type)
	{
		if (unknown.Type() != Type::Null)
		{
			throw Exception( "Encountered type does not match internal type of this Unknown." );
		}
		else
		{
			unknown = CreateType( type );
		}
	}
	unknown.VisitWith( *this );
}


void StreamReader::Visit( Unsigned & number ) 
{
	uint64 value;
	ConsumeWhiteSpace();	
	Consume( "<integer>" );
	stream >> value;
	Consume( "</integer>" );
	Consume( "\n" );
	number = value;
}


void StreamReader::Visit( Signed & number ) 
{
	int64 value;
	ConsumeWhiteSpace();
	Consume( "<integer>" );
	stream >> value;
	Consume( "</integer>" );
	Consume( "\n" );
	number = value;
}


void StreamReader::Visit( Float & number ) 
{
	float128 floatValue;

	ConsumeWhiteSpace();
	Consume( "<real>" );

	if (stream.peek() == 'n')
	{
		Consume( "nan" );
		floatValue = std::numeric_limits<float128>::quiet_NaN();
	}
	else
	{
		stream >> floatValue;
	}

	Consume( "</real>" );
	Consume( "\n" );

	number = floatValue;
}


void StreamReader::Visit( String & string ) 
{
	ConsumeWhiteSpace();
	Consume( "<string>" );		
	std::string buffer;
	while (stream.peek() != '<') 
	{
		buffer += (char) stream.get();
	}
	Consume( "</string>" );
	Consume( "\n" );
	string = decode_string( buffer );
}


void StreamReader::Visit( Boolean & boolean ) 
{
	bool value;
	ConsumeWhiteSpace();
	Consume( "<" );
	if (stream.peek() == 't') 
	{
		Consume( "true/>" );
		value = true;
	}
	else
	{
		Consume( "false/>" );
		value = false;
	}
	Consume( "\n" );
	boolean = value;
}


void StreamReader::Visit( Null & null ) 
{
	ConsumeWhiteSpace();
	Consume( "<data/>" );
	Consume( "\n" );
}


void StreamReader::Visit( Array & array ) 
{
	ConsumeWhiteSpace();
	Consume( "<array" );
	if (stream.peek() == '/')
	{
		Consume( "/>" );
		Consume( "\n" );
		return;
	}
	Consume( ">" );
	Consume( "\n" );
	while (true)
	{
		ConsumeWhiteSpace();
		if (Predict( "</a" )) break;
		Type::Enum type = PeekType();
		Unknown unknown = CreateType( type );
		unknown.VisitWith( *this );
		array.Insert( unknown );
	}
	ConsumeWhiteSpace();
	Consume( "</array>" );
	Consume( "\n" );
}


void StreamReader::Visit( Object & object ) 
{
	ConsumeWhiteSpace();
	Consume( "<dict" );
	if (stream.peek() == '/')
	{
		Consume( "/>" );
		Consume( "\n" );
		return;
	}
	Consume( ">" );
	Consume( "\n" );
	while (true)
	{
		ConsumeWhiteSpace();
		if (Predict( "</d" )) break;
		Consume( "<key>" );

		std::string name;
		while (stream.peek() != '<') name += stream.get();
		
		Consume( "</key>" );
		Consume( "\n" );
		
		ConsumeWhiteSpace();
		Type::Enum type = PeekType();		
		Unknown unknown = CreateType( type );
		unknown.VisitWith( *this );				
		object.Insert( name, unknown );
	}
	ConsumeWhiteSpace();
	Consume( "</dict>" );
	Consume( "\n" );
}


void StreamReader::ConsumeWhiteSpace( void )
{
	while (stream.peek() == ' ' || stream.peek() == '\t')
	{
		stream.get();
	}
}


void StreamReader::Consume( const char * token )
{
	size_t size = strlen( token );
	for (size_t i = 0; i < size; i++)
	{
		char c = (char) stream.get();
		if (c != token[i])
		{
			std::string e = "Expected: '";
			if (token[0] == '\n')
			{
				e += "\\n'";
			}
			else
			{
				e += token;
				e += "'";
			}
			e += " and found '";
			e += GetContext();
			e += "' instead.";
			throw Exception( e );
		}
	}
}


void StreamReader::Replace( const char * token )
{
	size_t size = strlen( token );
	for (size_t i = 0; i < size; i++)
	{
		stream.putback( token[i] );
	}
}


bool StreamReader::Predict( const char * token )
{
	std::streampos bookmark = stream.tellg();
	size_t size = strlen( token );
	for (size_t i = 0; i < size; i++)
	{
		if (token[i] != stream.get())
		{
			stream.seekg( bookmark );
			return false;
		}
	}
	stream.seekg( bookmark );
	return true;
}


std::string StreamReader::GetContext( void )
{
	std::string context;
	for (int i = 0; i < 10; i++) 
	{
		if (stream.peek() == EOF)
		{
			context += "(EOF)";
			break;
		}
		context += (char) stream.get();
	}
	return context;
}


#define stream_operator( type ) \
std::istream & operator >> ( std::istream & stream, type & element ) \
{ \
	StreamReader reader( stream ); \
	reader.Visit( element ); \
	return stream; \
}

stream_operator( Unknown );
stream_operator( Null );
stream_operator( Object );
stream_operator( Array );
stream_operator( Unsigned );
stream_operator( Signed );
stream_operator( Float );
stream_operator( Boolean );
stream_operator( String );


} // namespace
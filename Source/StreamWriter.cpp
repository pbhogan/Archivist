#include "StreamWriter.h"
#include <sstream>

namespace Archivist
{


static std::string encode_string( const std::string & str )
{
	std::ostringstream out;
	for (std::string::const_iterator i = str.begin(); i != str.end(); ++i)
	{
		unsigned char c = (unsigned char) *i;
		switch (c)
		{	
			case '&': out << "&amp;"; break;
			case '<': out << "&lt;"; break;
			case '>': out << "&gt;"; break;
			case '"': out << "&quot;"; break;
			case '\'': out << "&apos;"; break;
			
			default:
			if (c < 32 || c > 127)
			{
			   out << "&#" << (unsigned int)c << ";";
			}
			else
			{
			   out << c;
			}
		}
	}

	return out.str();
}


StreamWriter::StreamWriter( std::ostream & stream )
: stream( stream )
, indent( 0 )
{
}


void StreamWriter::Visit( const Unknown & unknown ) 
{
	unknown.VisitWith( *this );
}


void StreamWriter::Visit( const Unsigned & number ) 
{
	stream << "<integer>" << number.Value() << "</integer>" << std::endl;
}


void StreamWriter::Visit( const Signed & number ) 
{
	stream << "<integer>" << number.Value() << "</integer>" << std::endl;
}


void StreamWriter::Visit( const Float & number ) 
{
	std::ostringstream floatStream;
	floatStream.precision( std::numeric_limits<long double>::digits10 + 1 );
	floatStream << number.Value();
	
	//TODO: Need to deal with NaN

	stream << "<real>" << floatStream.str() << "</real>" << std::endl;
}


void StreamWriter::Visit( const String & string ) 
{
	std::string encoded = encode_string(string.Value());
	stream << "<string>" << encoded << "</string>" << std::endl;
}


void StreamWriter::Visit( const Boolean & boolean ) 
{
	stream << (boolean ? "<true/>" : "<false/>") << std::endl;
}


void StreamWriter::Visit( const Null & null ) 
{
	stream << "<data/>" << std::endl;
}


void StreamWriter::Visit( const Array & array ) 
{
	if (array.Empty())
	{
		stream << "<array/>" << std::endl;
		return;
	}

	stream << "<array>" << std::endl;
	indent++;
	for (Array::ConstIterator i = array.Begin(); i != array.End(); ++i)
	{
		const Unknown & u = *i;
		for (int j=0; j<indent; j++) stream << "\t";
		u.VisitWith( *this );
	}
	indent--;
	for (int j=0; j<indent; j++) stream << "\t";
	stream << "</array>" << std::endl;
}


void StreamWriter::Visit( const Object & object ) 
{
	if (object.Empty())
	{
		stream << "<dict/>" << std::endl;
		return;
	}

	stream << "<dict>" << std::endl;
	indent++;
	for (Object::ConstIterator i = object.Begin(); i != object.End(); ++i)
	{
		const Unknown & u = i->second;
		for (int j=0; j<indent; j++) stream << "\t";
		stream << "<key>" << i->first << "</key>" << std::endl;
		for (int j=0; j<indent; j++) stream << "\t";
		u.VisitWith( *this );
	}
	indent--;
	for (int j=0; j<indent; j++) stream << "\t";
	stream << "</dict>" << std::endl;
}


#define stream_operator( type ) \
std::ostream & operator << ( std::ostream & stream, const type & element ) \
{ \
	StreamWriter writer( stream ); \
	writer.Visit( element ); \
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

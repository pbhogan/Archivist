/*
 *  Enum.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#pragma once
#ifndef _ENUM_H_
#define _ENUM_H_


#define ENUM( ns, ... ) \
	namespace ns { \
	enum Enum { __VA_ARGS__ }; \
	}

// const char * Text[] = { TO_STRING( __VA_ARGS__ ), NULL }; \

namespace Archivist
{

	
template< typename E >
class Enum
{
private:
	E e;
	
public:
	Enum( const E & e = (E) 0 ) : e( e ) 
	{}

	operator E ( void ) const
	{ 
		return e; 
	}
	
	Unknown Encode( void ) const 
	{ 
		return Signed( e ); 
	}
	
	void Decode( const Unknown & unknown ) 
	{
		switch (unknown.Type())
		{
			case Type::Unsigned:
				e = (E) ((Unsigned) unknown).Value();
				break;
			case Type::Signed:
				e = (E) ((Signed) unknown).Value();
				break;
			default:
				throw Exception( "Bad Enum Conversion" );
				break;
		}
	}
};


} // namespace
	
#endif //_ENUM_H_

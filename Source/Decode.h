/*
 *  Encode.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#pragma once
#ifndef _DECODE_H_
#define _DECODE_H_

#include "Internal.h"
#include "Unknown.h"
#include "Null.h"
#include "Primitive.h"
#include "Array.h"
#include "Object.h"

namespace Archivist
{


template< typename T >
inline void DecodeNumber( const Unknown & unknown, T & into )
{ 
	switch (unknown.Type())
	{
		case Type::Unsigned:
			into = (T) ((Unsigned) unknown).Value();
			break;
		case Type::Signed:
			into = (T) ((Signed) unknown).Value();
			break;
		case Type::Float:
			into = ((Float) unknown).Value();
			break;
		default:
			throw Exception( "Bad Number Value Conversion" );
			break;
	}
}

inline void Decode( const Unknown & unknown, bool & into ) { into = ((Boolean) unknown).Value(); }
inline void Decode( const Unknown & unknown, int8_t & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, int16_t & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, int32_t & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, int64_t & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, long int & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, uint8_t & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, uint16_t & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, uint32_t & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, uint64_t & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, unsigned long int & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, float & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, double & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, long double & into ) { DecodeNumber( unknown, into ); }
inline void Decode( const Unknown & unknown, std::string & into ) { into = ((String) unknown).Value(); }


inline void Encode( const Unknown & unknown, Unknown & into ) { into = unknown; }
inline void Encode( const Unknown & unknown, Null & into ) { into = unknown; }
inline void Encode( const Unknown & unknown, Object & into ) { into = unknown; }	
inline void Encode( const Unknown & unknown, Array & into ) { into = unknown; }	
inline void Encode( const Unknown & unknown, Unsigned & into ) { into = unknown; }
inline void Encode( const Unknown & unknown, Signed & into ) { into = unknown; }
inline void Encode( const Unknown & unknown, Float & into ) { into = unknown; }
inline void Encode( const Unknown & unknown, Boolean & into ) { into = unknown; }
inline void Encode( const Unknown & unknown, String & into ) { into = unknown; }
	
	
template< class T >
void Decode( const Unknown & unknown, T & object ) 
{ 
	object.Decode( unknown ); 
}
	

template< typename S, typename T >
inline void Decode( const Unknown & unknown, std::pair<S,T> & container )
{
	const Array & array = unknown;
	Decode( array[0], container.first );
	Decode( array[1], container.second );
}


template< typename T >
inline void Decode( const Unknown & unknown, std::vector<T> & container )
{
	const Array & array = unknown;
	if (!container.empty()) throw Exception( "Container Not Empty" );
	for (Array::ConstIterator it = array.Begin(); it != array.End(); ++it)
	{		
		T val;
		Decode( *it, val );
		container.push_back( val );
	}
}


template< typename T >
inline void Decode( const Unknown & unknown, std::list<T> & container )
{
	const Array & array = unknown;
	if (!container.empty()) throw Exception( "Container Not Empty" );
	for (Array::ConstIterator it = array.Begin(); it != array.End(); ++it)
	{		
		T val;
		Decode( *it, val );
		container.push_back( val );
	}
}


template< typename T >
inline void Decode( const Unknown & unknown, std::deque<T> & container )
{
	const Array & array = unknown;
	if (!container.empty()) throw Exception( "Container Not Empty" );
	for (Array::ConstIterator it = array.Begin(); it != array.End(); ++it)
	{		
		T val;
		Decode( *it, val );
		container.push_back( val );
	}
}


template< typename T >
inline void Decode( const Unknown & unknown, std::set<T> & container )
{
	const Array & array = unknown;
	if (!container.empty()) throw Exception( "Container Not Empty" );
	for (Array::ConstIterator it = array.Begin(); it != array.End(); ++it)
	{		
		T val;
		Decode( *it, val );
		container.insert( val );
	}
}


template< typename T >
inline void Decode( const Unknown & unknown, std::multiset<T> & container )
{
	const Array & array = unknown;
	if (!container.empty()) throw Exception( "Container Not Empty" );
	for (Array::ConstIterator it = array.Begin(); it != array.End(); ++it)
	{		
		T val;
		Decode( *it, val );
		container.insert( val );
	}
}


template< typename T, typename S >
inline void Decode( const Unknown & unknown, std::map<T,S> & container )
{
	const Array & array = unknown;
	if (!container.empty()) throw Exception( "Container Not Empty" );
	for (Array::ConstIterator it = array.Begin(); it != array.End(); ++it)
	{		
		T key;
		S val;
		Decode( (*it)[0], key );
		Decode( (*it)[1], val );
		container[ key ] = val;
	}
}


template< typename T >
inline void Decode( const Unknown & unknown, std::map<std::string,T> & container )
{
	const Object & object = unknown;
	if (!container.empty()) throw Exception( "Container Not Empty" );
	for (Object::ConstIterator it = object.Begin(); it != object.End(); ++it)
	{		
		std::string key = it->first;
		T val;
		Decode( it->second, val );
		container[ key ] = val;
	}
}


template< typename T, typename S >
inline void Decode( const Unknown & unknown, std::multimap<T,S> & container )
{
	const Array & array = unknown;
	if (!container.empty()) throw Exception( "Container Not Empty" );
	for (Array::ConstIterator it = array.Begin(); it != array.End(); ++it)
	{		
		T key;
		S val;
		Decode( (*it)[0], key );
		Decode( (*it)[1], val );
		container.insert( std::pair<T,S>( key, val ) );
	}
}


template< typename T >
inline void Decode( const Unknown & unknown, std::multimap<std::string,T> & container )
{
	const Object & object = unknown;
	if (!container.empty()) throw Exception( "Container Not Empty" );
	for (Object::ConstIterator it = object.Begin(); it != object.End(); ++it)
	{		
		std::string key = it->first;
		T val;
		Decode( it->second, val );
		container.insert( std::pair<std::string,T>( key, val ) );
	}
}


} // namespace

#endif // _DECODE_H_
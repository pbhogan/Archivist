/*
 *  Encode.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#pragma once
#ifndef _ENCODE_H_
#define _ENCODE_H_

#include "Internal.h"
#include "Unknown.h"
#include "Null.h"
#include "Primitive.h"
#include "Array.h"
#include "Object.h"

namespace Archivist
{


inline Unknown Encode( const bool & value ) { return Boolean( value ); }
inline Unknown Encode( const int8_t & value ) { return Signed( value ); }
inline Unknown Encode( const int16_t & value ) { return Signed( value ); }
inline Unknown Encode( const int32_t & value ) { return Signed( value ); }
inline Unknown Encode( const int64_t & value ) { return Signed( value ); }
inline Unknown Encode( const long int & value ) { return Signed( value ); }
inline Unknown Encode( const uint8_t & value ) { return Unsigned( value ); }
inline Unknown Encode( const uint16_t & value ) { return Unsigned( value ); }
inline Unknown Encode( const uint32_t & value ) { return Unsigned( value ); }
inline Unknown Encode( const uint64_t & value ) { return Unsigned( value ); }
inline Unknown Encode( const unsigned long int & value ) { return Unsigned( value ); }
inline Unknown Encode( const float & value ) { return Float( value ); }
inline Unknown Encode( const double & value ) { return Float( value ); }
inline Unknown Encode( const long double & value ) { return Float( value ); }
inline Unknown Encode( const std::string & value ) { return String( value ); }


inline Unknown Encode( const Unknown & value ) { return value; }
inline Unknown Encode( const Null & value ) { return value; }
inline Unknown Encode( const Object & value ) { return value; }	
inline Unknown Encode( const Array & value ) { return value; }	
inline Unknown Encode( const Unsigned & value ) { return value; }
inline Unknown Encode( const Signed & value ) { return value; }
inline Unknown Encode( const Float & value ) { return value; }
inline Unknown Encode( const Boolean & value ) { return value; }
inline Unknown Encode( const String & value ) { return value; }

	
template< class T >
inline Unknown Encode( const T & object )
{
	return object.Encode();
}
	

template< typename S, typename T >
inline Unknown Encode( const std::pair<S,T> & container ) 
{ 
	Array array;
	array.Insert( Encode( container.first ) );
	array.Insert( Encode( container.second ) );
	return array;
}


template< typename T >
inline Unknown Encode( const std::vector<T> & container ) 
{ 
	Array array;
	typename std::vector<T>::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		array.Insert( Encode( *it ) );
	}
	return array;
}


template< typename T >
inline Unknown Encode( const std::list<T> & container ) 
{ 
	Array array;
	typename std::list<T>::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		array.Insert( Encode( *it ) );
	}
	return array;
}


template< typename T >
inline Unknown Encode( const std::deque<T> & container ) 
{ 
	Array array;
	typename std::deque<T>::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		array.Insert( Encode( *it ) );
	}
	return array;
}


template< typename T >
inline Unknown Encode( const std::set<T> & container ) 
{ 
	Array array;
	typename std::set<T>::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		array.Insert( Encode( *it ) );
	}
	return array;
}


template< typename T >
inline Unknown Encode( const std::multiset<T> & container ) 
{ 
	Array array;
	typename std::multiset<T>::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		array.Insert( Encode( *it ) );
	}
	return array;
}


template< typename T, typename S >
inline Unknown Encode( const std::map<T,S> & container ) 
{ 
	Array array;
	typename std::map<T,S>::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		array.Insert( Encode( *it ) );
	}
	return array;
}


template< typename T, typename S >
inline Unknown Encode( const std::multimap<T,S> & container ) 
{ 
	Array array;
	typename std::multimap<T,S>::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		array.Insert( Encode( *it ) );
	}
	return array;
}


} // namespace

#endif // _ENCODE_H_
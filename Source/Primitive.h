/*
 *  Primitive.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#pragma once
#ifndef _PRIMITIVE_H_
#define _PRIMITIVE_H_


namespace Archivist
{

	
template< typename T >
class Primitive
{
public:
	Primitive( const T & value = T() );

	operator T & ( void );
	operator const T & ( void ) const;

	T & Value( void );
	const T & Value( void ) const;

	bool operator == ( const Primitive<T> & value ) const;
	
//	template< typename S >
//	Primitive<T> & operator = ( const Primitive<S> & rhs )
//	{
//		value = rhs.value;
//		return *this;
//	}

	template< typename S >
	operator Primitive<S> ( void ) const
	{
		return Primitive<S>( value );
	}

private:
	T value;
};


template< typename T >
Primitive<T>::Primitive( const T & _value ) 
: value( _value )
{
}


template< typename T >
Primitive<T>::operator T & ( void )
{
	return Value(); 
}


template< typename T >
Primitive<T>::operator const T & ( void ) const
{
	return Value(); 
}


template< typename T >
T & Primitive<T>::Value( void )
{
	return value; 
}


template< typename T >
const T & Primitive<T>::Value( void ) const
{
	return value; 
}


template< typename T >
bool Primitive<T>::operator == ( const Primitive<T> & primitive ) const
{
	return (value == primitive.value);
}

	
} // namespace

#endif //_PRIMITIVE_H_
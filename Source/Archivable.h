/*
 *  Archivable.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All Rights Reserved.
 *
 */

#pragma once
#ifndef _G_ARCHIVABLE_H_
#define _G_ARCHIVABLE_H_

#include <iostream>


namespace Archivist
{


class Object;


#define HAS_METHOD_( method_name, const_flag, return_type, ... ) \
template< typename T > \
struct has_##method_name \
{ \
	template< typename U, U > struct TypeCheck; \
	typedef char Y; \
	typedef long N; \
	template< typename U > struct Signature \
	{ \
		typedef return_type (U::*funcPtr)( __VA_ARGS__ ) const_flag; \
	}; \
	template< typename U > static Y Has( TypeCheck< typename Signature<U>::funcPtr, & U::method_name > * ); \
	template< typename U > static N Has( ... ); \
	static bool const value = (sizeof(Has<T>(0)) == sizeof(Y)); \
};
	
#define HAS_METHOD( method_name, return_type, ... ) HAS_METHOD_( method_name, , return_type, __VA_ARGS__ );
#define HAS_CONST_METHOD( method_name, return_type, ... ) HAS_METHOD_( method_name, const, return_type, __VA_ARGS__ );

HAS_CONST_METHOD( OnEncode, void, Object & );
HAS_METHOD( OnDecode, void, const Object & );


template< bool C, typename T = void > struct enable_if { typedef T type; };
template< typename T > struct enable_if< false, T > {};

	
template< typename T > 
typename enable_if< has_OnEncode<T>::value, void >::type
EncodeNotification( const T & target, Object & object )
{
	return target.OnEncode( object );
}

template< typename T > 
typename enable_if< !has_OnEncode<T>::value, void >::type
EncodeNotification( const T & target, Object & object ) {}


template< typename T > 
typename enable_if< has_OnDecode<T>::value, void >::type
DecodeNotification( T & target, const Object & object )
{
	return target.OnDecode( object );
}

template< typename T > 
typename enable_if< !has_OnDecode<T>::value, void >::type
DecodeNotification( T & target, const Object & object ) {}


}  // namespace


#endif // _G_ARCHIVABLE_H_

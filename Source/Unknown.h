/*
 *  Unknown.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#pragma once
#ifndef _UNKNOWN_H_
#define _UNKNOWN_H_

#include "Internal.h"


namespace Archivist
{


class Visitor;
class ConstVisitor;


namespace Type
{
	enum Enum
	{
		Null,
		Object,
		Array,
		Unsigned,
		Signed,
		Float,
		Boolean,
		String,
		End // End marker
	};
};


class Null;
class Object;
class Array;

template< typename T > class Primitive;
typedef Primitive< uint64 > Unsigned;
typedef Primitive< int64 > Signed;
typedef Primitive< float128 > Float;
typedef Primitive< bool > Boolean;
typedef Primitive< std::string > String;


class Unknown
{
public:
	Unknown( void );
	Unknown( const Unknown & unknown );
	Unknown( const Null & null );
	Unknown( const Object & object );
	Unknown( const Array & array );
	Unknown( const Unsigned & number );
	Unknown( const Signed & number );
	Unknown( const Float & number );
	Unknown( const Boolean & boolean );
	Unknown( const String & string );

	~Unknown( void );
	
	Type::Enum Type( void ) const;
	
	Unknown & operator = ( const Unknown & unknown );
	
	operator const Object & ( void ) const;
	operator const Array & ( void ) const;
	operator const Unsigned & ( void ) const;
	operator const Signed & ( void ) const;
	operator const Float & ( void ) const;
	operator const Boolean & ( void ) const;
	operator const String & ( void ) const;
	operator const Null & ( void ) const;
	
	operator Object & ( void );
	operator Array & ( void );
	operator Unsigned & ( void );
	operator Signed & ( void );
	operator Float & ( void );
	operator Boolean & ( void );
	operator String & ( void );
	operator Null & ( void );

	Unknown & operator [] ( const std::string & key );
	const Unknown & operator [] ( const std::string & key ) const;
	
	Unknown & operator [] ( size_t index );
	const Unknown & operator [] ( size_t index ) const;

	void VisitWith( ConstVisitor & visitor ) const;
	void VisitWith( Visitor & visitor );

	bool operator == ( const Unknown & unknown ) const;
	
private:
	class ProxyBase;
	template< typename T > class Proxy;
	template< typename T > class ConvertVisitor;
	template< typename T > class CastVisitor;
	
	template< typename T > const T & CastTo( void ) const;
	template< typename T > T & ConvertTo( void );
		
	ProxyBase * proxy;
};


} // namespace

#endif // _UNKNOWN_H_

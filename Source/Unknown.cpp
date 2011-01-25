/*
 *  Unknown.cpp
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#include "Visitor.h"
#include "Exception.h"


namespace Archivist
{


INLINE Type::Enum TypeOf( const Object & element ) { return Type::Object; }
INLINE Type::Enum TypeOf( const Array & element ) { return Type::Array; }
INLINE Type::Enum TypeOf( const Null & element ) { return Type::Null; }
INLINE Type::Enum TypeOf( const Unsigned & element ) { return Type::Unsigned; }
INLINE Type::Enum TypeOf( const Signed & element ) { return Type::Signed; }
INLINE Type::Enum TypeOf( const Float & element ) { return Type::Float; }
INLINE Type::Enum TypeOf( const Boolean & element ) { return Type::Boolean; }
INLINE Type::Enum TypeOf( const String & element ) { return Type::String; }


template< typename T >
class Unknown::CastVisitor : public ConstVisitor
{
public:
	CastVisitor( void ) 
	: element( NULL ) 
	{
	}

	virtual void Visit( const T & unknown )
	{
		element = & unknown;
	}

	bool DidFail( void )
	{
		return element == NULL;
	}

	const T & Value( void )
	{
		return *element;
	}

	virtual bool IsEqualTo( const T & value ) const
	{
		return element and *element == value;
	}

private:
	const T * element;
};


template< typename T >
class Unknown::ConvertVisitor : public Visitor
{
public:
	ConvertVisitor( void ) 
	: element( NULL ) 
	{
	}

	virtual void Visit( T & unknown ) 
	{ 
		element = & unknown; 
	}

	bool DidFail( void )
	{
		return element == NULL;
	}

	T & Value( void )
	{
		return *element;
	}

private:
	T * element;
};


class Unknown::ProxyBase
{
public:
	ProxyBase( void ) {}
	virtual ProxyBase * Clone() const = 0;

	virtual void VisitWith( ConstVisitor & visitor ) const = 0;
	virtual void VisitWith( Visitor & visitor ) = 0;

	virtual bool IsEqualTo( const ProxyBase & proxy ) const = 0;
	
	virtual Type::Enum Type( void ) const = 0;
};


template< typename T >
class Unknown::Proxy : public Unknown::ProxyBase
{
public:
	Proxy( const T & unknown )
	: element( unknown )
	{
	}

	virtual ProxyBase * Clone( void ) const 
	{ 
		return new Proxy<T>( *this ); 
	}

	virtual void VisitWith( ConstVisitor & visitor ) const 
	{ 
		visitor.Visit( element ); 
	}

	virtual void VisitWith( Visitor & visitor ) 
	{ 
		visitor.Visit( element ); 
	}

	virtual bool IsEqualTo( const ProxyBase & proxy ) const
	{
		CastVisitor<T> castVisitor;
		proxy.VisitWith( castVisitor );
		return castVisitor.IsEqualTo( element );
	}
	
	virtual Type::Enum Type( void ) const
	{
		return TypeOf( element );
	}

private:
	T element;
};


INLINE Unknown::Unknown( void )						: proxy( new Proxy<Null>( Null() ) ) {}
INLINE Unknown::Unknown( const Unknown & unknown )	: proxy( unknown.proxy->Clone() ) {}
INLINE Unknown::Unknown( const Object & object )	: proxy( new Proxy<Object>( object ) ) {}
INLINE Unknown::Unknown( const Array & array )		: proxy( new Proxy<Array>( array ) ) {}
INLINE Unknown::Unknown( const Unsigned & number )	: proxy( new Proxy<Unsigned>( number ) ) {}
INLINE Unknown::Unknown( const Signed & number )	: proxy( new Proxy<Signed>( number ) ) {}
INLINE Unknown::Unknown( const Float & number )		: proxy( new Proxy<Float>( number ) ) {}
INLINE Unknown::Unknown( const Boolean & boolean )	: proxy( new Proxy<Boolean>( boolean ) ) {}
INLINE Unknown::Unknown( const String & string )	: proxy( new Proxy<String>( string ) ) {}
INLINE Unknown::Unknown( const Null & null )		: proxy( new Proxy<Null>( null ) ) {}

INLINE Unknown::~Unknown( void )
{ 
	delete proxy;
}

INLINE Type::Enum Unknown::Type( void ) const
{
	return proxy->Type();
}


INLINE Unknown::operator const Object & ( void ) const		{ return CastTo<Object>(); }
INLINE Unknown::operator const Array & ( void ) const		{ return CastTo<Array>(); }
INLINE Unknown::operator const Unsigned & ( void ) const	{ return CastTo<Unsigned>(); }
INLINE Unknown::operator const Signed & ( void ) const		{ return CastTo<Signed>(); }
INLINE Unknown::operator const Float & ( void ) const		{ return CastTo<Float>(); }
INLINE Unknown::operator const Boolean & ( void ) const		{ return CastTo<Boolean>(); }
INLINE Unknown::operator const String & ( void ) const		{ return CastTo<String>(); }
INLINE Unknown::operator const Null & ( void ) const		{ return CastTo<Null>(); }

INLINE Unknown::operator Object & ( void )		{ return ConvertTo<Object>(); }
INLINE Unknown::operator Array & ( void )		{ return ConvertTo<Array>(); }
INLINE Unknown::operator Unsigned & ( void )	{ return ConvertTo<Unsigned>(); }
INLINE Unknown::operator Signed & ( void )		{ return ConvertTo<Signed>(); }
INLINE Unknown::operator Float & ( void )		{ return ConvertTo<Float>(); }
INLINE Unknown::operator Boolean & ( void )		{ return ConvertTo<Boolean>(); }
INLINE Unknown::operator String & ( void )		{ return ConvertTo<String>(); }
INLINE Unknown::operator Null & ( void )		{ return ConvertTo<Null>(); }


INLINE Unknown & Unknown::operator = ( const Unknown & unknown )
{
	delete proxy;
	proxy = unknown.proxy->Clone();
	return *this;
}


INLINE Unknown & Unknown::operator [] ( const std::string & key )
{
	Object & object = ConvertTo<Object>();
	return object[key];
}


INLINE const Unknown & Unknown::operator [] ( const std::string & key ) const
{
	const Object & object = CastTo<Object>();
	return object[key];
}


INLINE Unknown & Unknown::operator [] ( size_t index )
{
	Array & array = ConvertTo<Array>();
	return array[index];
}


INLINE const Unknown & Unknown::operator [] ( size_t index ) const
{
	const Array & array = CastTo<Array>();
	return array[index];
}


template< typename T >
const T & Unknown::CastTo( void ) const
{
	CastVisitor<T> castVisitor;
	proxy->VisitWith( castVisitor );
	if (castVisitor.DidFail())
	{
		throw Exception( "Bad Cast" );
	}
	return castVisitor.Value();
}



template< typename T >
T & Unknown::ConvertTo( void ) 
{
	ConvertVisitor<T> convertVisitor;
	proxy->VisitWith( convertVisitor );
	if (convertVisitor.DidFail())
	{
		throw Exception( "Bad Conversion" );
		//*this = T();
		//proxy->VisitWith( convertVisitor );
	}
	return convertVisitor.Value();
}


INLINE void Unknown::VisitWith( ConstVisitor & visitor ) const
{ 
	proxy->VisitWith( visitor ); 
}


INLINE void Unknown::VisitWith( Visitor & visitor )
{ 
	proxy->VisitWith( visitor );
}


INLINE bool Unknown::operator == ( const Unknown & unknown ) const
{
   return proxy->IsEqualTo( *unknown.proxy );
}


} // namespace Archivist

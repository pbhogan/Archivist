/*
 *  Array.cpp
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#include "Array.h"
#include "Exception.h"


namespace Archivist
{


INLINE Array::Iterator Array::Begin( void )
{ 
	return elements.begin(); 
}


INLINE Array::Iterator Array::End( void )
{
	return elements.end();
}


INLINE Array::ConstIterator Array::Begin( void ) const
{
	return elements.begin(); 
}


INLINE Array::ConstIterator Array::End( void ) const 
{
	return elements.end();
}


INLINE Array::Iterator Array::Insert( const Unknown & element, Iterator position )
{ 
	return elements.insert( position, element );
}


INLINE Array::Iterator Array::Insert( const Unknown & element )
{
	return Insert( element, End() );
}


INLINE Array::Iterator Array::Delete( Iterator position )
{ 
	return elements.erase( position );
}


INLINE void Array::Resize( size_t size )
{
	elements.resize( size );
}


INLINE size_t Array::Size( void ) const
{
	return elements.size(); 
}


INLINE bool Array::Empty( void ) const
{ 
	return elements.empty(); 
}


INLINE Unknown & Array::operator [] ( size_t index )
{
	size_t requiredSize = index + 1;
	if (elements.size() < requiredSize)
	{
		elements.resize( requiredSize );
	}
	return elements[ index ];
}


INLINE const Unknown & Array::operator[] ( size_t index ) const 
{
	if (index >= elements.size())
	{
		throw Exception( "Index out of bounds" );
	}
	return elements[ index ];
}


INLINE void Array::Clear( void )
{
	elements.clear();
}


INLINE bool Array::operator == ( const Array & array ) const
{
	return elements == array.elements;
}


INLINE Array & Array::operator << ( const Unknown & element )
{
	Insert( element );
	return *this;
}


INLINE void Array::VisitEachWith( ConstVisitor & visitor ) const
{
	for (Array::ConstIterator i = Begin(); i != End(); ++i)
	{
		(*i).VisitWith( visitor );
	}
}


INLINE void Array::VisitEachWith( Visitor & visitor )
{
	for (Array::Iterator i = Begin(); i != End(); ++i)
	{
		(*i).VisitWith( visitor );
	}
}


} // namespace

// END

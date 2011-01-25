/*
 *  Array.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#pragma once
#ifndef _ARRAY_H_
#define _ARRAY_H_

#include "Internal.h"
#include "Visitor.h"
#include "Unknown.h"


namespace Archivist
{

	
class Array
{
public:
	typedef std::deque< Unknown > Elements;
	typedef Elements::iterator Iterator;
	typedef Elements::const_iterator ConstIterator;

public:
	Iterator Begin( void );
	Iterator End( void );
	ConstIterator Begin( void ) const;
	ConstIterator End( void ) const;
	
	Iterator Insert( const Unknown & element, Iterator position );
	Iterator Insert( const Unknown & element );
	Iterator Delete( Iterator position );
	void Resize( size_t size );
	void Clear( void );
	
	size_t Size( void ) const;
	bool Empty( void ) const;
	
	Unknown & operator [] ( size_t index );
	const Unknown & operator [] ( size_t index ) const;

	bool operator == ( const Array & array ) const;
	Array & operator << ( const Unknown & element );
	
	void VisitEachWith( ConstVisitor & visitor ) const;
	void VisitEachWith( Visitor & visitor );
	
private:
	Elements elements;
};


} // namespace
	
#endif //_ARRAY_H_
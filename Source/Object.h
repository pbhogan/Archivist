/*
 *  Object.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#pragma once
#ifndef _OBJECT_H_
#define _OBJECT_H_

#include "Internal.h"
#include "Visitor.h"
#include "Unknown.h"


namespace Archivist
{


class Object
{
public:	
	typedef std::map< std::string, Unknown > Members;
	typedef Members::iterator Iterator;
	typedef Members::const_iterator ConstIterator;
	
	bool operator == ( const Object & object ) const;
	
	Iterator Begin( void );
	Iterator End( void );
	ConstIterator Begin( void ) const;
	ConstIterator End( void ) const;
	
	void Insert( const std::string & key, const Unknown & unknown );
	void Erase( const std::string & key );
	void Clear( void );
	
	size_t Size( void ) const;
	bool Empty( void ) const;
	
	Iterator Find( const std::string & key );
	ConstIterator Find( const std::string & key ) const;
	
	Unknown & operator [] ( const std::string & key );
	const Unknown & operator [] ( const std::string & key ) const;
	
private:
	Members members;
};


} // namespace
	
#endif //_ARRAY_H_
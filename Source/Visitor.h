/*
 *  Visitor.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#pragma once
#ifndef _VISITOR_H_
#define _VISITOR_H_

#include "Internal.h"
#include "Null.h"
#include "Primitive.h"
#include "Array.h"
#include "Object.h"

namespace Archivist
{
	
	
class Visitor
{
public:
	virtual ~Visitor( void ) {}
	
	virtual void Visit( Array & array ) {};
	virtual void Visit( Object & object ) {};
	virtual void Visit( Unsigned & number ) {};
	virtual void Visit( Signed & number ) {};
	virtual void Visit( Float & number ) {};
	virtual void Visit( String & string ) {};
	virtual void Visit( Boolean & boolean ) {};
	virtual void Visit( Null & null ) {};
};


class ConstVisitor
{
public:
	virtual ~ConstVisitor( void ) {}
	
	virtual void Visit( const Array & array ) {};
	virtual void Visit( const Object & object ) {};
	virtual void Visit( const Unsigned & number ) {};
	virtual void Visit( const Signed & number ) {};
	virtual void Visit( const Float & number ) {};
	virtual void Visit( const String & string ) {};
	virtual void Visit( const Boolean & boolean ) {};
	virtual void Visit( const Null & null ) {};
};
	
	
} // namespace Archivist

#endif //_VISITOR_H

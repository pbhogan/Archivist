/*
 *  StreamWriter.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All Rights Reserved.
 *
 */

#pragma once
#ifndef _G_STREAM_WRITER_H_
#define _G_STREAM_WRITER_H_

#include "Internal.h"
#include "Unknown.h"
#include "Null.h"
#include "Primitive.h"
#include "Array.h"
#include "Object.h"

namespace Archivist
{


class StreamWriter : public ConstVisitor
{
public:
	StreamWriter( std::ostream & stream );

	virtual void Visit( const Unknown & unknown );

	virtual void Visit( const Unsigned & number );
	virtual void Visit( const Signed & number );
	virtual void Visit( const Float & number );
	virtual void Visit( const String & string ); 
	virtual void Visit( const Boolean & boolean ); 

	virtual void Visit( const Null & null );
	virtual void Visit( const Array & array );
	virtual void Visit( const Object & object );	
	
private:
	std::ostream & stream;
	int indent;
};


#define stream_operator( type ) std::ostream & operator << ( std::ostream & stream, const type & element );
stream_operator( Unknown );
stream_operator( Null );
stream_operator( Object );
stream_operator( Array );
stream_operator( Unsigned );
stream_operator( Signed );
stream_operator( Float );
stream_operator( Boolean );
stream_operator( String );
#undef stream_operator


} // namespace


#endif //_G_STREAM_WRITER_H_
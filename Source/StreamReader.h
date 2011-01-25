/*
 *  StreamReader.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All Rights Reserved.
 *
 */

#pragma once
#ifndef _G_STREAM_READER_H_
#define _G_STREAM_READER_H_

#include "Internal.h"
#include "Unknown.h"
#include "Exception.h"
#include "Null.h"
#include "Primitive.h"
#include "Array.h"
#include "Object.h"

namespace Archivist
{


class StreamReader : public Visitor
{
public:
	StreamReader( std::istream & stream );

	virtual void Visit( Unknown & unknown );

	virtual void Visit( Unsigned & number );
	virtual void Visit( Signed & number );
	virtual void Visit( Float & number );
	virtual void Visit( String & string ); 
	virtual void Visit( Boolean & boolean ); 

	virtual void Visit( Null & null );
	virtual void Visit( Array & array );
	virtual void Visit( Object & object );
	
private:
	Type::Enum PeekType( void );
	void ConsumeWhiteSpace( void );
	void Consume( const char * token );
	void Replace( const char * token );
	bool Predict( const char * token );
	std::string GetContext( void );

private:
	std::istream & stream;
};


#define stream_operator( type ) std::istream & operator >> ( std::istream & stream, type & element )
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


#endif //_G_STREAM_READER_H_
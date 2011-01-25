/*
 *  Object.cpp
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#include "Object.h"
#include "Exception.h"


namespace Archivist
{
	
	
INLINE Object::Iterator Object::Begin( void ) 
{ 
	return members.begin();
}


INLINE Object::Iterator Object::End( void )
{ 
	return members.end();
}


INLINE Object::ConstIterator Object::Begin( void ) const 
{ 
	return members.begin(); 
}


INLINE Object::ConstIterator Object::End( void ) const 
{ 
	return members.end(); 
}


INLINE size_t Object::Size( void ) const 
{ 
	return members.size(); 
}


INLINE bool Object::Empty( void ) const 
{ 
	return members.empty(); 
}


INLINE Object::Iterator Object::Find( const std::string & key ) 
{
	return members.find( key );
}


INLINE Object::ConstIterator Object::Find( const std::string & key ) const 
{
	return members.find( key );
}


INLINE void Object::Insert( const std::string & key, const Unknown & unknown )
{
	members[ key ] = unknown;
}


INLINE void Object::Erase( const std::string & key ) 
{
	members.erase( key );
}


INLINE Unknown & Object::operator [] ( const std::string & key )
{
	return members[ key ];
}


INLINE const Unknown & Object::operator [] ( const std::string & key ) const 
{
	ConstIterator i = Find( key );
	if (i == End())
	{
		throw Exception( "Member not found: " + key );
	}
	return i->second;
}


INLINE void Object::Clear( void )
{
	members.clear(); 
}


INLINE bool Object::operator == ( const Object & object ) const 
{
	return members == object.members;
}


} // namespace

// END

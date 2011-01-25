/*
 *  ArchivistMore.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#pragma once
#ifndef _ARCHIVIST_MORE_H_
#define _ARCHIVIST_MORE_H_


#include "Archivable.h"
#include "Attributes.h"
#include "Archive.h"

#define EncodeAttributes() void OnEncode( Archivist::Object & object ) const 
#define DecodeAttributes() void OnDecode( const Archivist::Object & object ) 
#define EncodeAttribute( attr ) object[ #attr ] = Archivist::Encode( attr ); 
#define DecodeAttribute( attr ) Archivist::Decode( object[ #attr ], attr ); 
#define EncodeSuper( class ) class::Encode( object );
#define DecodeSuper( class ) class::Decode( object );


#endif // _ARCHIVIST_MORE_H_
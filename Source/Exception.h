/*
 *  Exception.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#pragma once
#ifndef _EXCEPTION_H_
#define _EXCEPTION_H_

#include "Internal.h"


namespace Archivist
{


class Exception : public std::runtime_error
{
public:
	Exception( const std::string & message ) 
	: std::runtime_error( message ) 
	{
	}
};


} // namespace

#endif // _ARCHIVIST_H_
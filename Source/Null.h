/*
 *  Null.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#pragma once
#ifndef _NULL_H_
#define _NULL_H_

#include "Internal.h"


namespace Archivist
{

	
class Null
{
public:
	bool operator == ( const Null & null ) const;
};


} // namespace
	
#endif //_NULL_H_
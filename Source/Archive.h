/*
 *  Archive.h
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#pragma once
#ifndef _ARCHIVE_H_
#define _ARCHIVE_H_

#include "Internal.h"
#include "Unknown.h"


namespace Archivist
{

	
namespace ArchiveType
{
	enum Enum
	{
		PropertyList
	};
};


class Archive
{
private:
	ArchiveType::Enum archiveType;
	std::string fileName;	
	
public:
	Archive( const std::string & fileName, ArchiveType::Enum archiveType = ArchiveType::PropertyList );

	void Save( const Unknown & unknown );
	const Unknown Load( void );

	static void Save( const std::string & fileName, const Unknown & unknown );
	static const Unknown Load( const std::string & fileName );
};
	
	
} // namespace Archivist

#endif //_ARCHIVE_H

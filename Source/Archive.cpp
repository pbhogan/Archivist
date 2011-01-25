/*
 *  Archive.cpp
 *  Archivist
 *
 *  Copyright 2010 Gallant Games. All rights reserved.
 *
 */

#include "Archive.h"
#include "StreamReader.h"
#include "StreamWriter.h"
#include <fstream>


namespace Archivist
{
	

Archive::Archive( const std::string & fileName, ArchiveType::Enum archiveType )
: fileName( fileName )
, archiveType( archiveType )
{
}


void Archive::Save( const Unknown & unknown )
{
	std::ofstream stream( fileName.c_str(), std::ofstream::trunc ); // | ofstream::binary
	
	stream << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << std::endl;
	stream << "<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">" << std::endl;
	stream << "<plist version=\"1.0\">" << std::endl;
	
	StreamWriter streamWriter( stream );
	streamWriter.Visit( unknown );
	
	stream << "</plist>" << std::endl;
	
	stream.flush();
	stream.close();
}


const Unknown Archive::Load( void )
{
	std::ifstream stream( fileName.c_str() ); // , ifstream::binary
	stream.seekg( 164 ); // skip plist header
	
	Unknown unknown;
	StreamReader streamReader( stream );
	streamReader.Visit( unknown );
	
	stream.close();
	
	return unknown;
}


void Archive::Save( const std::string & fileName, const Unknown & unknown )
{
	Archive archive( fileName );
	archive.Save( unknown );
}


const Unknown Archive::Load( const std::string & fileName )
{
	Archive archive( fileName );
	return archive.Load();
}
	
	
} // namespace

// END

#include <UnitTest++/UnitTest++.h>
#include "Archivist.h"
using namespace Archivist;


class Thing1
{
public:
	float x, y;
	
	ArchiveAttributes( x, y );
};


class Thing2 : public Thing1
{
public:
	float z;

	ArchiveAttributes( x, y, z );
};


SUITE( ClassSize )
{
	TEST( ArchiveAttributesDoesNotIncreaseClassSize )
	{		
		CHECK_EQUAL( 2, sizeof(Thing1) / sizeof(float) );
		CHECK_EQUAL( 3, sizeof(Thing2) / sizeof(float) );
	}
}

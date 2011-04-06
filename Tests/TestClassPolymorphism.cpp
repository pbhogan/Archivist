#include <UnitTest++/UnitTest++.h>
#include "Archivist.h"
using namespace Archivist;


class Vector1
{
public:
	float x;
	
	ArchiveAttributes( x );
};


class Vector2
{
public:
	float x, y;
	
	ArchiveAttributesBase( x, y );
};


class Vector3 : public Vector2
{
public:
	float z;

	ArchiveAttributes( x, y, z );
};


class Vector4 : public Vector1
{
public:
	float w;

	ArchiveAttributes( x, w );
};


SUITE( ClassPolymorphism )
{
	TEST( ArchiveAttributesIsNotPolymorphism )
	{		
		Vector1 v1;
		Vector4 v4;		

		CHECK_EQUAL( 1, v1.Encode().Size() );
		CHECK_EQUAL( 2, v4.Encode().Size() );
		
		Vector1 *v = & v4;
		CHECK_EQUAL( 1, v->Encode().Size() );
	}


	TEST( ArchiveAttributesBaseIsolymorphic )
	{		
		Vector2 v2;
		Vector3 v3;

		CHECK_EQUAL( 2, v2.Encode().Size() );
		CHECK_EQUAL( 3, v3.Encode().Size() );

		Vector2 *v = & v3;
		CHECK_EQUAL( 3, v->Encode().Size() );		
	}
}

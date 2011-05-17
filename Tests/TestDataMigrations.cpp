#include <UnitTest++/UnitTest++.h>
#include "Archivist.h"
using namespace Archivist;


class More
{
public:
	int32_t a, b;
	ArchiveAttributes( a, b );
	
	More( void )
	{
		a = 1;
		b = 2;
	}
};


class Less
{
public:
	int32_t a;
	ArchiveAttributes( a );
	
	Less( void )
	{
		a = 3;
	}
};


SUITE( DataMigrations )
{
	TEST( RemoveField )
	{
		Less less;
		CHECK_EQUAL( less.a, 3 );
		Unknown u = Encode( less );
		CHECK_EQUAL( 3, ((Signed)u["a"]).Value() );
		
		More more;
		CHECK_EQUAL( more.a, 1 );
		CHECK_EQUAL( more.b, 2 );
		more.Decode( u );
		CHECK_EQUAL( more.a, 3 );
		CHECK_EQUAL( more.b, 2 );
	}

	TEST( InsertField )
	{
		More more;		
		CHECK_EQUAL( more.a, 1 );
		CHECK_EQUAL( more.b, 2 );
		Unknown u = Encode( more );
		CHECK_EQUAL( 1, ((Signed)u["a"]).Value() );
		CHECK_EQUAL( 2, ((Signed)u["b"]).Value() );

		Less less;
		CHECK_EQUAL( less.a, 3 );
		less.Decode( u );
		CHECK_EQUAL( less.a, 1 );
	}
}

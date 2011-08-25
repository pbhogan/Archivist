#include <UnitTest++/UnitTest++.h>
#include "Archivist.h"
using namespace Archivist;


SUITE( Primitives )
{
	TEST( PrimitivesAreCorrectSize )
	{
		#define bitsizeof(x) (sizeof(x) * 8)
		CHECK( bitsizeof(int8) == 8 );
		CHECK( bitsizeof(int16) == 16 );
		CHECK( bitsizeof(int32) == 32 );
		CHECK( bitsizeof(int64) == 64 );
		CHECK( bitsizeof(uint8) == 8 );
		CHECK( bitsizeof(uint16) == 16 );
		CHECK( bitsizeof(uint32) == 32 );
		CHECK( bitsizeof(uint64) == 64 );
		CHECK( bitsizeof(float32) == 32 );
		CHECK( bitsizeof(float64) == 64 );
		CHECK( bitsizeof(float128) == 128 );	
	}
	
	
	TEST( NullIsBooleanFalse )
	{
		Unknown u = Null();
		CHECK( u.IsNull() );
		CHECK( !u );
		CHECK( u == false );
		CHECK( u != true );
	}
}

#include <UnitTest++/UnitTest++.h>
#include "Archivist.h"
using namespace Archivist;

#include <math.h>
#include <limits>
using namespace std;


SUITE( EncodeDecode )
{
	TEST( NullType )
	{
		Unknown u;
		CHECK_EQUAL( Type::Null, u.Type() );
		
		u = Null();
		CHECK_EQUAL( Type::Null, u.Type() );
	}


	TEST( NullTypeThrowsExceptionWhenCast )
	{
		Unknown u = Null();
        Unknown v;
        
		CHECK_THROW( v = (Object) u, exception );
		CHECK_THROW( v = (Array) u, exception );
		CHECK_THROW( v = (Unsigned) u, exception );
		CHECK_THROW( v = (Signed) u, exception );
		CHECK_THROW( v = (Float) u, exception );
		CHECK_THROW( v = (Boolean) u, exception );
		CHECK_THROW( v = (String) u, exception );
	}

	
	TEST( EncodeDecodeNull )
	{
		Unknown u = Null();
	}


	TEST( EncodeDecodeBoolean )
	{
		bool b1 = true;
		bool b2 = false;

		Unknown u = Encode( b1 );
		CHECK_EQUAL( Type::Boolean, u.Type() );
		CHECK_EQUAL( true, ((Boolean)u).Value() );
		
		Decode( u, b2 );
		CHECK_EQUAL( b1, b2 );
	}


	TEST( EncodeDecode8BitInt )
	{
		int8 i1 = numeric_limits<int8>::min();
		int8 i2 = 0;

		Unknown u = Encode( i1 );
		CHECK_EQUAL( Type::Signed, u.Type() );
		CHECK_EQUAL( numeric_limits<int8>::min(), ((Signed)u).Value() );
		
		Decode( u, i2 );
		CHECK_EQUAL( i1, i2 );
	}
	
	
	TEST( EncodeDecode8BitUnsignedInt )
	{
		uint8 i1 = numeric_limits<uint8>::max();
		uint8 i2 = 0;

		Unknown u = Encode( i1 );
		CHECK_EQUAL( Type::Unsigned, u.Type() );
		CHECK_EQUAL( numeric_limits<uint8>::max(), ((Unsigned)u).Value() );
		
		Decode( u, i2 );
		CHECK_EQUAL( i1, i2 );
	}
	
	
	TEST( EncodeDecode16BitInt )
	{
		int16 i1 = numeric_limits<int16>::min();
		int16 i2 = 0;

		Unknown u = Encode( i1 );
		CHECK_EQUAL( Type::Signed, u.Type() );
		CHECK_EQUAL( numeric_limits<int16>::min(), ((Signed)u).Value() );
		
		Decode( u, i2 );
		CHECK_EQUAL( i1, i2 );
	}
	
	
	TEST( EncodeDecode16BitUnsignedInt )
	{
		uint16 i1 = numeric_limits<uint16>::max();
		uint16 i2 = 0;

		Unknown u = Encode( i1 );
		CHECK_EQUAL( Type::Unsigned, u.Type() );
		CHECK_EQUAL( numeric_limits<uint16>::max(), ((Unsigned)u).Value() );
		
		Decode( u, i2 );
		CHECK_EQUAL( i1, i2 );
	}
	
	
	TEST( EncodeDecode32BitInt )
	{
		int32 i1 = numeric_limits<int32>::min();
		int32 i2 = 0;

		Unknown u = Encode( i1 );
		CHECK_EQUAL( Type::Signed, u.Type() );
		CHECK_EQUAL( numeric_limits<int32>::min(), ((Signed)u).Value() );
		
		Decode( u, i2 );
		CHECK_EQUAL( i1, i2 );
	}
	
	
	TEST( EncodeDecode32BitUnsignedInt )
	{
		uint32 i1 = numeric_limits<uint32>::max();
		uint32 i2 = 0;

		Unknown u = Encode( i1 );
		CHECK_EQUAL( Type::Unsigned, u.Type() );
		CHECK_EQUAL( numeric_limits<uint32>::max(), ((Unsigned)u).Value() );
		
		Decode( u, i2 );
		CHECK_EQUAL( i1, i2 );
	}
	

	TEST( EncodeDecode64BitInt )
	{
		int64 i1 = numeric_limits<int64>::min();
		int64 i2 = 0;

		Unknown u = Encode( i1 );
		CHECK_EQUAL( Type::Signed, u.Type() );
		CHECK_EQUAL( numeric_limits<int64>::min(), ((Signed)u).Value() );
		
		Decode( u, i2 );
		CHECK_EQUAL( i1, i2 );
	}
	
	
	TEST( EncodeDecode64BitUnsignedInt )
	{
		uint64 i1 = numeric_limits<uint64>::max();
		uint64 i2 = 0;

		Unknown u = Encode( i1 );
		CHECK_EQUAL( Type::Unsigned, u.Type() );
		CHECK_EQUAL( numeric_limits<uint64>::max(), ((Unsigned)u).Value() );
		
		Decode( u, i2 );
		CHECK_EQUAL( i1, i2 );
	}
	
	
	TEST( EncodeDecode32BitFloat )
	{
		float32 f1 = numeric_limits<float32>::max();
		float32 f2 = 0;

		Unknown u = Encode( f1 );
		CHECK_EQUAL( Type::Float, u.Type() );
		CHECK_EQUAL( numeric_limits<float32>::max(), ((Float)u).Value() );
		
		Decode( u, f2 );
		CHECK_EQUAL( f1, f2 );
	}
	

	TEST( EncodeDecode64BitFloat )
	{
		float64 f1 = numeric_limits<float64>::max();
		float64 f2 = 0;

		Unknown u = Encode( f1 );
		CHECK_EQUAL( Type::Float, u.Type() );
		CHECK_EQUAL( numeric_limits<float64>::max(), ((Float)u).Value() );
		
		Decode( u, f2 );
		CHECK_EQUAL( f1, f2 );
	}
	

	TEST( EncodeDecode128BitFloat )
	{
		float128 f1 = numeric_limits<float128>::max();
		float128 f2 = 0;

		Unknown u = Encode( f1 );
		CHECK_EQUAL( Type::Float, u.Type() );
		CHECK_EQUAL( numeric_limits<float128>::max(), ((Float)u).Value() );
		
		Decode( u, f2 );
		CHECK_EQUAL( f1, f2 );
	}

	
	TEST( EncodeDecodeNaNFloat )
	{	
		float32 f1 = numeric_limits<float32>::quiet_NaN();
		float32 f2 = 0;
		
		CHECK( isnan( f1 ) );

		Unknown u = Encode( f1 );
		CHECK_EQUAL( Type::Float, u.Type() );
		
		Decode( u, f2 );
		CHECK( isnan( f2 ) );
	}
	
	
	TEST( EncodeDecodeString )
	{
		string s1 = "The \n Cat \t Sat \r On The Mat";
		string s2 = "";

		Unknown u = Encode( s1 );
		CHECK_EQUAL( Type::String, u.Type() );
		CHECK_EQUAL( s1, ((String)u).Value() );
		
		Decode( u, s2 );
		CHECK_EQUAL( s1, s2 );
	}
	
	
	TEST( EncodeDecodeArray )
	{
		Array a;
		CHECK_EQUAL( 0, a.Size() );
		
		a << Boolean( true );
		a.Insert( Unsigned( 12345 ) );
		
		CHECK_EQUAL( 2, a.Size() );

		CHECK_EQUAL( Type::Boolean, a[0].Type() );
		CHECK_EQUAL( true, ((Boolean)a[0]).Value() );

		CHECK_EQUAL( Type::Unsigned, a[1].Type() );
		CHECK_EQUAL( 12345, ((Unsigned)a[1]).Value() );
		
		a.Delete( a.Begin() );

		CHECK_EQUAL( 1, a.Size() );
		CHECK_EQUAL( Type::Unsigned, a[0].Type() );
		CHECK_EQUAL( 12345, ((Unsigned)a[0]).Value() );
	}
	
	
	TEST( EncodeDecodeObject )
	{
		Object a, b;
		a["u"] = Unsigned( 12345 );
		a["b"] = Boolean( true );
		
		CHECK_EQUAL( 2, a.Size() );
		
		b = a;
		
		CHECK_EQUAL( Type::Boolean, b["b"].Type() );
		CHECK_EQUAL( true, ((Boolean)b["b"]).Value() );

		CHECK_EQUAL( Type::Unsigned, b["u"].Type() );
		CHECK_EQUAL( 12345, ((Unsigned)b["u"]).Value() );
		
		b.Erase( "u" );

		CHECK( b.Find("u") == b.End() );
	}
}


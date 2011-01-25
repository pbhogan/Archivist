#include <UnitTest++/UnitTest++.h>
#include "Archivist.h"
using namespace Archivist;

#include <limits>
using namespace std;


SUITE( StreamReaderWriter )
{
	TEST( NullType )
	{
		Unknown u;
		stringstream stream;		
		stream << Null();		
		stream >> u;
		CHECK_EQUAL( Type::Null, u.Type() );
	}
	
	
	TEST( BooleanType )
	{
		Unknown u;
		stringstream stream;				
		stream << Boolean( true );
		stream >> u;
		CHECK_EQUAL( Type::Boolean, u.Type() );
		CHECK_EQUAL( true, ((Boolean)u).Value() );
	}
	
	
	TEST( UnsignedType )
	{
		Unknown u;
		stringstream stream;				
		stream << Unsigned( numeric_limits<uint64>::max() );
		stream >> u;
		CHECK_EQUAL( Type::Unsigned, u.Type() );
		CHECK_EQUAL( numeric_limits<uint64>::max(), ((Unsigned)u).Value() );
	}


	TEST( SignedType )
	{
		Unknown u;
		stringstream stream;				
		stream << Signed( numeric_limits<int64>::min() );
		stream >> u;
		CHECK_EQUAL( Type::Signed, u.Type() );
		CHECK_EQUAL( numeric_limits<int64>::min(), ((Signed)u).Value() );
	}


	TEST( FloatType )
	{
		Unknown u;
		stringstream stream;				
		stream << Float( numeric_limits<float128>::max() );
		stream >> u;
		CHECK_EQUAL( Type::Float, u.Type() );
		CHECK_EQUAL( numeric_limits<float128>::max(), ((Float)u).Value() );
	}
	
	TEST( StringType )
	{
		Unknown u;
		stringstream stream;
		string s = "The \n Cat \t Sat \r On The Mat & < > \" \'";
		stream << String( s );
		stream >> u;
		CHECK_EQUAL( Type::String, u.Type() );
		CHECK_EQUAL( s, ((String)u).Value() );
	}
	
	
	TEST( ArrayType )
	{
		Unknown u;
		stringstream stream;
		Array a;		
		a << Boolean( true );
		a.Insert( Unsigned( 12345 ) );
		stream << a;
		stream >> u;
		CHECK_EQUAL( Type::Array, u.Type() );
		a = (Array) u;
		CHECK_EQUAL( true, ((Boolean)a[0]).Value() );
		CHECK_EQUAL( 12345, ((Unsigned)a[1]).Value() );
	}
	
	
	TEST( ObjectType )
	{
		Unknown u;
		stringstream stream;
		Object o;
		o["u"] = Unsigned( 12345 );
		o["b"] = Boolean( true );
		stream << o;
		stream >> u;
		CHECK_EQUAL( Type::Object, u.Type() );
		o = (Object) u;
		CHECK_EQUAL( true, ((Boolean)o["b"]).Value() );
		CHECK_EQUAL( 12345, ((Unsigned)o["u"]).Value() );
	}

}
#include <UnitTest++/UnitTest++.h>
#include "Archivist.h"
using namespace Archivist;


class Thing
{
private:
	int32_t i;
	bool b;
	
public:
	ArchiveAttributes( i, b );
	
	Thing( void )
	{
		i = 0;
		b = false;
	}
	
	void Setup( void )
	{
		i = 12345;
		b = true;
	}
	
	bool IsValid( void )
	{
		return ((i == 12345) && (b == true));
	}
};


SUITE( Enum )
{
	TEST( LoadingNonExistantArchiveReturnsNull )
	{
		Unknown u = Archive::Load( "does_not_exist.plist" );
		
		CHECK( u.IsNull() );
	}


	TEST( ArchiveSaves )
	{
		Thing t;
		
		t.Setup();
		CHECK( t.IsValid() );
		
		Archive::Save( "test.plist", t.Encode() );		
	}


	TEST( ArchiveLoads )
	{
		Object o = Archive::Load( "test.plist" );

		CHECK_EQUAL( 2, o.Size() );
		
		CHECK_EQUAL( Type::Boolean, o["b"].Type() );
		CHECK_EQUAL( true, ((Boolean)o["b"]).Value() );

		CHECK_EQUAL( Type::Unsigned, o["i"].Type() );
		CHECK_EQUAL( 12345, ((Unsigned)o["i"]).Value() );
		
		Thing t;

		CHECK( !t.IsValid() );

		t.Decode( o );		

		CHECK( t.IsValid() );
	}
}

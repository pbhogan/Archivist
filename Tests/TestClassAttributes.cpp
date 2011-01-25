#include <UnitTest++/UnitTest++.h>
#include "Archivist.h"
using namespace Archivist;


class Thing1
{
private:
	int32_t i;
	bool b;
	float f; // present but won't be encoded

public:
	ArchiveAttributes( i, b );

	Thing1( void )
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


bool encodeFired; // needs to be global because OnEncode is const
bool decodeFired;

class Thing2
{
public:
	ArchiveAttributes();

	Thing2( void )
	{
		encodeFired = false;
		decodeFired = false;
	}
	
	EncodeAttributes()
	{ 
		encodeFired = true;
	}
	
	DecodeAttributes()
	{
		decodeFired = true;
	}
};


class Thing3 : public Thing2
{
public:
	int b;
	ArchiveAttributes( b );

	Thing3( void )
	{
		encodeFired = false;
		decodeFired = false;
	}

	EncodeAttributes()
	{
		EncodeSuper( Thing2 );
	}
	
	DecodeAttributes()
	{
		DecodeSuper( Thing2 );
	}
};



SUITE( ClassAttributes )
{
	TEST( EncodesAndDecodesAttributes )
	{		
		Thing1 c1, c2;
		
		c1.Setup();		
		CHECK( c1.IsValid() );
		
		Object o = c1.Encode();
				
		CHECK_EQUAL( 2, o.Size() );

		CHECK_EQUAL( Type::Boolean, o["b"].Type() );
		CHECK_EQUAL( true, ((Boolean)o["b"]).Value() );

		CHECK_EQUAL( Type::Signed, o["i"].Type() );
		CHECK_EQUAL( 12345, ((Signed)o["i"]).Value() );		
		
		CHECK( !c2.IsValid() );		
		c2.Decode( o );		
		CHECK( c2.IsValid() );
	}
	
	
	TEST( EncodeDecodeHooksFireWhenPresent )
	{
		Thing2 c;
		
		CHECK_EQUAL( false, encodeFired );
		CHECK_EQUAL( false, decodeFired );
		
		Object o = c.Encode();		
		CHECK_EQUAL( true, encodeFired );
		
		c.Decode( o );
		CHECK_EQUAL( true, decodeFired );
	}


	TEST( EncodesAndDecodesSuper )
	{
		Thing3 c;
		
		CHECK_EQUAL( false, encodeFired );
		CHECK_EQUAL( false, decodeFired );
		
		Object o = c.Encode();		
		CHECK_EQUAL( true, encodeFired );
		
		c.Decode( o );
		CHECK_EQUAL( true, decodeFired );
	}
}

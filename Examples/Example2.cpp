#include <UnitTest++/UnitTest++.h>

#include "Archivist.h"
using namespace Archivist;


#include <string>
#include <list>
#include <map>
using namespace std;


class Point2
{
public:
	float x, y;

public:
	ArchiveAttributes( x, y );
	
	Point2( float x = 0.0f, float y = 0.0f )
	: x(x)
	, y(y)
	{}
};


class Monster
{
private:
	Point2 position;
	uint32_t health;
	
public:
	ArchiveAttributes(
		position,
		health
	);
	
	Monster( void )
	{
		health = 100;
		position = Point2( 
			rand() % 50, 
			rand() % 50 
		);
	}
};


class BabyMonster : public Monster
{
private:
	float age;

public:
	ArchiveAttributes( age );

	EncodeAttributes()
	{
		EncodeSuper( Monster );
	}
	
	DecodeAttributes()
	{
		DecodeSuper( Monster );
	}

	BabyMonster( void )
	: Monster()
	{
		age = 1.0f;
	}
};


int main( int argc, char * const argv[] )
{	
	BabyMonster babyMonster;
	
	// save it out to disk
	Archive::Save( "babymonster.plist", babyMonster.Encode() );

	// and load it back again	
	babyMonster.Decode( Archive::Load( "babymonster.plist" ) );
	
	return UnitTest::RunAllTests();
}

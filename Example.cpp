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


namespace WeaponType
{
	enum Enum
	{
		WaterPistol,
		NerfGun,
		Uzi9mm,
		Bazooka
	};
};


class Player
{
private:
	string name;
	Point2 position;
	uint32_t health;
	uint32_t ammo;
	Enum< WeaponType::Enum > weaponType;
	
public:
	ArchiveAttributes( 
		name, 
		position,
		health,
		ammo,
		weaponType
	);
	
	Player( void )
	{
	}
	
	Player( string name, float x, float y )
	: name( name )
	, position( x, y )
	, health( 100 )
	, ammo( 100 )	
	, weaponType( WeaponType::WaterPistol )
	{
	}

	string GetName( void ) const
	{
		return name;
	}
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


class Arena
{
private:
	map< string, Player > playerList;	
	list< Monster > monsterList;
	
public:
	ArchiveAttributes(
		playerList,
		monsterList
	);	
	
	void AddPlayer( const Player player )
	{
		playerList[ player.GetName() ] = player;
	}

	void SpawnMonster( void )
	{
		monsterList.push_back( Monster() );
	}
};


int main( int argc, char * const argv[] )
{	
	Arena arena;

	arena.AddPlayer( Player( "Mario", 10, 0 ) );
	arena.AddPlayer( Player( "Luigi", 40, 0 ) );

	for (int i = 0; i < 5; i++)
	{
		arena.SpawnMonster();
	}	
	
	// save it out to disk
	Archive::Save( "arena.plist", arena.Encode() );

	// and load it back again	
	Arena arena2;
	arena2.Decode( Archive::Load( "arena.plist" ) );
	
	return UnitTest::RunAllTests();
}

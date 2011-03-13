#include <UnitTest++/UnitTest++.h>
#include "Archivist.h"
using namespace Archivist;


SUITE( Containers )
{
	TEST( Pair )
	{
		std::pair< int, bool > p1( 12345, true ), p2;

		Unknown u = Encode( p1 );
		CHECK_EQUAL( Type::Array, u.Type() );

		Decode( u, p2 );
		CHECK_EQUAL( p1.first, p2.first );
		CHECK_EQUAL( p1.second, p2.second );
	}
	
	
	TEST( Vector )
	{
		std::vector< int > c1, c2;		
		for (int i=0; i<10; i++) c1.push_back( i );

		Unknown u = Encode( c1 );
		CHECK_EQUAL( Type::Array, u.Type() );

		Decode( u, c2 );		
		CHECK_EQUAL( c1.size(), c2.size() );	
		std::vector< int >::iterator i1, i2;
		for (i1 = c1.begin(), i2 = c2.begin(); i1 != c1.end(); ++i1, ++i2) CHECK_EQUAL( *i1, *i2 );
	}
	
	
	TEST( List )
	{
		std::list< int > c1, c2;		
		for (int i=0; i<10; i++) c1.push_back( i );

		Unknown u = Encode( c1 );
		CHECK_EQUAL( Type::Array, u.Type() );

		Decode( u, c2 );		
		CHECK_EQUAL( c1.size(), c2.size() );	
		std::list< int >::iterator i1, i2;
		for (i1 = c1.begin(), i2 = c2.begin(); i1 != c1.end(); ++i1, ++i2) 
		{
			CHECK_EQUAL( *i1, *i2 );
		}
	}
	
	
	TEST( Deque )
	{
		std::deque< int > c1, c2;		
		for (int i=0; i<10; i++) c1.push_back( i );

		Unknown u = Encode( c1 );
		CHECK_EQUAL( Type::Array, u.Type() );

		Decode( u, c2 );		
		CHECK_EQUAL( c1.size(), c2.size() );	
		std::deque< int >::iterator i1, i2;
		for (i1 = c1.begin(), i2 = c2.begin(); i1 != c1.end(); ++i1, ++i2) 
		{
			CHECK_EQUAL( *i1, *i2 );
		}
	}
	
	
	TEST( Set )
	{
		std::set< int > c1, c2;		
		for (int i=0; i<10; i++) c1.insert( i );

		Unknown u = Encode( c1 );
		CHECK_EQUAL( Type::Array, u.Type() );

		Decode( u, c2 );		
		CHECK_EQUAL( c1.size(), c2.size() );	
		std::set< int >::iterator i1, i2;
		for (i1 = c1.begin(), i2 = c2.begin(); i1 != c1.end(); ++i1, ++i2) 
		{
			CHECK_EQUAL( *i1, *i2 );
		}
	}
	
	
	TEST( MultiSet )
	{
		std::multiset< int > c1, c2;		
		for (int i=0; i<10; i++) c1.insert( i );

		Unknown u = Encode( c1 );
		CHECK_EQUAL( Type::Array, u.Type() );

		Decode( u, c2 );		
		CHECK_EQUAL( c1.size(), c2.size() );	
		std::multiset< int >::iterator i1, i2;
		for (i1 = c1.begin(), i2 = c2.begin(); i1 != c1.end(); ++i1, ++i2) 
		{
			CHECK_EQUAL( *i1, *i2 );
		}
	}


	TEST( Map )
	{
		std::map< int, int > c1, c2;		
		for (int i=0; i<10; i++) c1[ i ] = 10 - i;

		Unknown u = Encode( c1 );
		CHECK_EQUAL( Type::Array, u.Type() );

		Decode( u, c2 );		
		CHECK_EQUAL( c1.size(), c2.size() );	
		std::map< int, int >::iterator i1, i2;
		for (i1 = c1.begin(), i2 = c2.begin(); i1 != c1.end(); ++i1, ++i2) 
		{
			CHECK_EQUAL( i1->first, i2->first );
			CHECK_EQUAL( i1->second, i2->second );
		}
	}
	
	
	TEST( MapWithStringKey )
	{
		std::map< std::string, int > c1, c2;		
		c1[ std::string("a") ] = 1;
		c1[ std::string("b") ] = 2;
		c1[ std::string("c") ] = 3;

		Unknown u = Encode( c1 );
		CHECK_EQUAL( Type::Object, u.Type() );

		Decode( u, c2 );		
		CHECK_EQUAL( c1.size(), c2.size() );	
		std::map< std::string, int >::iterator i1, i2;
		for (i1 = c1.begin(), i2 = c2.begin(); i1 != c1.end(); ++i1, ++i2) 
		{
			CHECK_EQUAL( i1->first, i2->first );
			CHECK_EQUAL( i1->second, i2->second );
		}
	}
	
	
	TEST( MultiMap )
	{
		std::multimap< int, int > c1, c2;		
		for (int i=0; i<10; i++) c1.insert( std::pair< int, int >( i, 10 - i ) );

		Unknown u = Encode( c1 );
		CHECK_EQUAL( Type::Array, u.Type() );

		Decode( u, c2 );		
		CHECK_EQUAL( c1.size(), c2.size() );	
		std::multimap< int, int >::iterator i1, i2;
		for (i1 = c1.begin(), i2 = c2.begin(); i1 != c1.end(); ++i1, ++i2) 
		{
			CHECK_EQUAL( i1->first, i2->first );
			CHECK_EQUAL( i1->second, i2->second );
		}
	}
	
	TEST( MultiMapWithStringKey )
	{
		std::multimap< std::string, int > c1, c2;		
		c1.insert( std::pair< std::string, int >( "a", 1 ) );
		c1.insert( std::pair< std::string, int >( "b", 2 ) );
		c1.insert( std::pair< std::string, int >( "c", 3 ) );

		Unknown u = Encode( c1 );
		CHECK_EQUAL( Type::Object, u.Type() );

		Decode( u, c2 );		
		CHECK_EQUAL( c1.size(), c2.size() );	
		std::multimap< std::string, int >::iterator i1, i2;
		for (i1 = c1.begin(), i2 = c2.begin(); i1 != c1.end(); ++i1, ++i2) 
		{
			CHECK_EQUAL( i1->first, i2->first );
			CHECK_EQUAL( i1->second, i2->second );
		}
	}

}

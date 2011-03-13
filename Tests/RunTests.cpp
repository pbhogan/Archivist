#include <UnitTest++/UnitTest++.h>

#include "Archivist.h"
using namespace Archivist;


int main( int argc, char * const argv[] )
{
	std::map< std::string, int > intList;
	intList[ std::string("a") ] = 1;
	intList[ std::string("b") ] = 2;
	intList[ std::string("c") ] = 3;

	std::cout << Encode( intList );

	return UnitTest::RunAllTests();
}

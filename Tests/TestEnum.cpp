#include <UnitTest++/UnitTest++.h>
#include "Archivist.h"
using namespace Archivist;

ENUM( ThingType,
	Thing1,
	Thing2,
	Thing3,
	Thing4
);

SUITE( Enum )
{
	TEST( EnumWrapperEncodesAndDecodes )
	{
		ThingType::Enum thingType = ThingType::Thing3;
		Enum<ThingType::Enum> thingTypeWrapped = thingType;
		CHECK_EQUAL( thingType, thingTypeWrapped );
		
		Unknown u = Encode( thingTypeWrapped );		
		CHECK_EQUAL( Type::Signed, u.Type() );
		CHECK_EQUAL( thingType, ((Signed)u).Value() );
		
		Enum<ThingType::Enum> t2 = ThingType::Thing1;
		Decode( u,  t2);
		CHECK_EQUAL( thingType, t2 );
	}
}

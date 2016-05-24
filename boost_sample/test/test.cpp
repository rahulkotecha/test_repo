#define BOOST_TEST_MODULE MyTest
#include <boost/test/unit_test.hpp>
#include "../src/header.h"

BOOST_AUTO_TEST_CASE( my_test )
{
    BOOST_CHECK( add(1, 2) == 4 );
}

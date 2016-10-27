#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE foobar_test
#include <boost/test/included/unit_test.hpp>
#include <boost/bind.hpp>
using namespace boost::unit_test;

struct MyFixture {
	MyFixture() {
		i = new int;
		*i = 0;
	}
	~MyFixture() {
		delete i;
	}

	int* i;
};

BOOST_AUTO_TEST_CASE( test_case1 ) {
    BOOST_TEST_MESSAGE("running test_case1");
    BOOST_TEST(1 == 0);
	MyFixture f;
	// do something involving f.i
}

BOOST_AUTO_TEST_CASE( test_case2 ) {
    BOOST_TEST_MESSAGE("running test_case2");
    BOOST_TEST(0 == 0);
	MyFixture f;
	// do something involving f.i
}

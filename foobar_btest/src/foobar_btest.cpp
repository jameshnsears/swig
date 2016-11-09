#define BOOST_TEST_MODULE foobar_test
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include "Foo.h"
#include <string>

using namespace boost::unit_test;
using namespace std;

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
	MyFixture f;

    Foo * foo = new Foo();
    string a = "y";
    string b = "z";

    string r = string(foo->Bar(a, b));
	BOOST_TEST(r.compare("yz") == 0);
}

BOOST_AUTO_TEST_CASE( test_case2 ) {
	BOOST_TEST_MESSAGE("running test_case2");
	MyFixture f;

	Foo * foo = new Foo();
	BOOST_TEST(3 == foo->Bar(1, 2));
}

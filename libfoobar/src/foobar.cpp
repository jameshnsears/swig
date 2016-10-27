#include "Foo.h"
#include <iostream>
#include <string>

using namespace std;

Foo::Foo() {
}

Foo::~Foo() {
}

string Foo::Bar(string a, string b) {
	return a + b;
}

int Foo::Bar(int a, int b) {
	return a + b;
}

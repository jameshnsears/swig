#include "Foo.h"
#include <iostream>
#include <string>

Foo::Foo() {
}

Foo::~Foo() {
}

int Foo::Bar(std::string a, std::string b) {
	return 1;
}

int Foo::Bar(int a, int b) {
	return a + b;
}

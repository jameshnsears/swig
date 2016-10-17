#include "Foo.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
	string a = "y";
	string b = "z";
	int c = 2;
	int d = 2;
	Foo f;
	cout << f.Bar(c, d);
}

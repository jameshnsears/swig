#include "Foo.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    Foo * f = new Foo();

    string a = "y";
    string b = "z";
    cout << f->Bar(a, b);

    cout << f->Bar(1, 2);
    delete f;
}

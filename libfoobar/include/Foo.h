#include <string>

class Foo {
public:
	Foo();
	virtual ~Foo();
	int Bar(std::string, std::string);
	int Bar(int, int);
};

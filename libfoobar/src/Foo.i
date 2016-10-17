%module mymodule

%include <std_string.i>

%{
#include "../include/Foo.h"
%}

%include "../include/Foo.h"

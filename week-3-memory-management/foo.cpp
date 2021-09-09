#include "foo.hpp"

Foo::Foo ()
{
	this->a = new int[10];
}
Foo::~Foo ()
{
	delete [] this->a;
}

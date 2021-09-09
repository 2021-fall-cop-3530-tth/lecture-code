#include "foo.hpp"

Foo::Foo (int a)
{
	this->a = new int[a];
}

Foo (const Foo& rhs)
{
	// copy rhs
}
Foo& operator= (const Foo& rhs)
{
	this->ReleaseMemory();
	//copy rhs
}

Foo::~Foo ()
{
	this->ReleaseMemory();
}

void Foo::ReleaseMemory ()
{
	if (this->a != nullptr)
	{
		delete [] this->a;
	}
}

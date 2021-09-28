#include <iostream>

void foo (int n)
{
	++n;
}

void bar (int& n)
{
	++n;
}

int main ()
{
	int a = 12;
	foo(a);
	std::cout << a << std::endl;
	bar(a);
	std::cout << a << std::endl;

	int * b = &a;
	std::cout << *b << std::endl;

	int n = 100;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			// constant time stuff
		}
	}

	return 0;
}
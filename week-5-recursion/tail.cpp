#include <iostream>

void f (int n)
{
	std::cout << n << "\n";
	//std::cout << n << '\n'; // feature or bug. This won't optimize with the -O3 flag
	f (n-1);
}

int main ()
{
	f(10);
	return 0;
}
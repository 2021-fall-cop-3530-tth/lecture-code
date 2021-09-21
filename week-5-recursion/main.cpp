#include <iostream>

void rec (int n)
{
	std::cout << n << "\n";
	if (n > 0)
	{
		rec(n-1);
	}
}

int main ()
{
	int n = 10;
	rec(n);
	
	
	while (n > 0)
	{
		// really cool stuff
		// n needs to get smaller
		n--;
	}
	return 0;
}
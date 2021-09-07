#include <iostream>

int main ()
{
	int a = 12;

	int c[10];
	int* arrayA = new int[10];
	delete [] arrayA;
	arrayA = nullptr;

	//c = arrayA;
	arrayA = c;

	for (int i = 0; i < 10; ++i)
	{
		//c[i] = 3 * i;
		arrayA[i] = 3 * i;
	}

	std::cout << *(arrayA + 3) << std::endl;
	std::cout << arrayA[3] << std::endl;
	std::cout << c[3] << std::endl;
	int* b;

	int ** matrix;
	matrix = new int*[10];

	for (int i = 0; i < 10; ++i)
	{
		matrix[i] = new int[12];
	}

	for (int i = 0; i < 10; ++i)
	{
		delete [] matrix[i];
	}
	delete [] matrix;

	return 0;
}
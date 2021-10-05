#include "utils.hpp"

void Utils::Swap (int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	// zero extra space
	//a[i] = a[i] ^ a[j];
	//a[j] = a[j] ^ a[i];
	//a[i] = a[i] ^ a[j];
}

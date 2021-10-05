#include "utils.hpp"

//void Utils::Swap (double a[], int i, int j)
//{
//	// if (i...)
//	double temp = a[i];
//	a[i] = a[j];
//	a[j] = temp;
//}
template <typename TemplateType>
void Utils::Swap (TemplateType a[], int i, int j)
{
	// if (i...)
	TemplateType temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	// zero extra space
	//a[i] = a[i] ^ a[j];
	//a[j] = a[j] ^ a[i];
	//a[i] = a[i] ^ a[j];
}

template void Utils::Swap (int a[], int i, int j);
template void Utils::Swap (double a[], int i, int j);

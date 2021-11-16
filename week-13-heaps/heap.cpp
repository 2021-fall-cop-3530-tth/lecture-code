#include "heap.hpp"

int Heap::GetParent (int i)
{
	return (i - 1) / 2;
}

int Heap::GetLeft (int i)
{
	return (i * 2) + 1;
}

int Heap::GetRight (int i)
{
	return this->GetLeft(i) + 1;
}

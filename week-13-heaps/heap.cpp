#include "heap.hpp"

int Heap::GetParent (int i)
{
	if (i <= 0)
	{
		return -1;
	}
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

void Heap::Swap (int i, int j)
{
	int temp = this->data[i];
	this->data[i] = this->data[j];
	this->data[j] = temp;
}

void Heap::Percolate (int i)
{
	if (i == 0)
	{
		return;
	}
	int parentId = this->GetParent(i);
	if (this->data[parentId] < this->data[i])
	{
		this->Swap(i, parentId);
		this->Percolate(parentId);
	}
	// implicit base case subtree root is already max
}

void Heap::Insert (int newValue)
{
	// #1
	this->data.push_back(newValue);
	// #2
	this->Percolate(this->data.size() - 1);
}

int Heap::Max ()
{
	return this->data[0];
}

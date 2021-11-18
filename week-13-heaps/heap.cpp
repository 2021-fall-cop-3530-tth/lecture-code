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

void Heap::PercolateDown (int i)
{
	int rightChild = this->GetRight(i);
	int leftChild = this->GetLeft(i);

	if (rightChild >= this->data.size()) // no right child
	{
		if (leftChild >= this->data.size()) // no left child
		{
			return;
		}
		else
		{
			if (this->data[i] < this->data[leftChild])
			{
				this->Swap(i, leftChild);
				// not needed since we know this is the bottom of the tree
				//this->PercolateDown(leftChild);
			}
		}
	}
	else // right child present
	{
		if (this->data[rightChild] > this->data[leftChild])
		{
			if (this->data[rightChild] > this->data[i])
			{
				this->Swap(i, rightChild);
				this->PercolateDown(rightChild);
			}
		}
		else // left child is larger
		{
			if (this->data[leftChild] > this->data[i])
			{
				this->Swap(i, leftChild);
				this->PercolateDown(leftChild);
			}
		}
	}
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

void Heap::Pop()
{
	this->data[0] = this->data[this->data.size()-1];
	this->data.pop_back();
	this->PercolateDown(0);
}

#ifndef HEAP_HPP
#define HEAP_HPP

#include <vector>

class Heap
{
	private:
		std::vector<int> data;
		void Percolate (int i);
		void Swap (int i, int j);
	public:
		int GetParent (int i);
		int GetLeft (int i);
		int GetRight (int i);
		void Insert (int newValue);
		int Max ();
};

#endif /*HEAP_HPP*/
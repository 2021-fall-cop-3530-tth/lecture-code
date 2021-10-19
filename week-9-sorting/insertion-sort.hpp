#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP
#include <vector>

class InsertionSort
{
	public:
		static void Sort(std::vector<int>& data);
		static void Swap(std::vector<int>& data, size_t i, size_t j);
};

#endif /*INSERTION_SORT_HPP*/

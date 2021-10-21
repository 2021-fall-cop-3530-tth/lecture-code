#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP
#include <vector>

class MergeSort
{
	private:
		static void Sort (std::vector<int>& data, size_t start, size_t end);
		static void Merge (std::vector<int>& data, size_t start, size_t end);
	public:
		static void Sort (std::vector<int>& data);
};

#endif /*MERGE_SORT_HPP*/
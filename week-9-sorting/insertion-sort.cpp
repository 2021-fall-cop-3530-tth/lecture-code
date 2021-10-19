#include "insertion-sort.hpp"

void InsertionSort::Sort(std::vector<int>& data)
{
	for (size_t i = 0; i < data.size() - 1; ++i)
	{
		for (size_t j = i + 1; j > 0; --j)
		{
			if (data[j] < data[j-1])
			{
				InsertionSort::Swap(data, j, j-1);
			}
			else
			{
				break;
			}
		}
	}
}

void InsertionSort::Swap(std::vector<int>& data, size_t i, size_t j)
{
	int temp = data[i];
	data[i] = data[j];
	data[j] = temp;
}

#include "merge-sort.hpp"

void MergeSort::Sort (std::vector<int>& data)
{
	MergeSort::Sort(data, 0, data.size() - 1);
}

void MergeSort::Sort (std::vector<int>& data, size_t start, size_t end)
{
	// base case(s)
	if (start >= end)
	{
		return;
	}
	size_t middle = (start + end) / 2;
	MergeSort::Sort(data, start, middle);
	MergeSort::Sort(data, middle + 1, end);
	MergeSort::Merge(data, start, end);
}

void MergeSort::Merge (std::vector<int>& data, size_t start, size_t end)
{
	size_t left = start;
	size_t middle = (start + end) / 2;
	size_t right = middle + 1;
	std::vector<int> input = data; // input is read

	while (left <= middle && right <= end)
	{
		if (input[left] < input[right])
		{
			data[start++] = input[left++];
		}
		else
		{
			data[start++] = input[right++];
		}
	}
	while (left <= middle)
	{
		data[start++] = input[left++];
	}
	while (right <= end)
	{
		data[start++] = input[right++];
	}
}

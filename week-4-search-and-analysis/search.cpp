#include "search.hpp"

int Search::Find(int arr[], int length, int searchKey)
{
	int right = length;
	int left = 0;
	int middle = length/2;

	while (right > left)
	{
		middle = (left + right) / 2;
		
		if (searchKey == arr[middle])
		{
			return middle;
		}
		else if (searchKey < arr[middle])
		{
			right = middle - 1;
		}
		else
		{
			left = middle + 1;
		}
	}

	return -1;
}

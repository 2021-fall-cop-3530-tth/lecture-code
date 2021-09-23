#include "search.hpp"

int Search::Find(int arr[], int length, int searchKey)
{
	return Search::RecursiveFind(arr, 0, length, searchKey);
}
int Search::RecursiveFind(int arr[], int left, int right, int searchKey)
{
	int middle = (left + right) / 2;
	// base case
	if (left > right) // not there
	{
		return -1;
	}
	else if (searchKey == arr[middle])
	{
		return middle;
	}
	else if (searchKey > arr[middle])
	{
		return Search::RecursiveFind(arr, middle + 1, right, searchKey);
	}
	else
	{
		return Search::RecursiveFind(arr, left, middle - 1, searchKey);
	}
}

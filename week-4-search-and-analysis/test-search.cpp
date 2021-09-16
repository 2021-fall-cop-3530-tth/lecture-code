#include "../catch/catch.hpp"
#include "search.hpp"

int arr[] = {1, 2, 3 , 4, 5, 5 , 10, 42, 100};

TEST_CASE("Search for element not there")
{
	CHECK(-1 == Search::Find(arr, 9, 7));
	//CHECK(8 == Search::Find(arr, 9, 100));
//	CHECK(?? == search 5)
}
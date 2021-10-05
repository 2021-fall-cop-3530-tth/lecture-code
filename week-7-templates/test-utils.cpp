#include "../catch/catch.hpp"
#include "utils.hpp"

int arr[] = {1, 2, 3 , 4, 5, 5 , 10, 42, 100};

TEST_CASE("Swap")
{
	Utils::Swap(arr, 0, 2);
	CHECK(3 == arr[0]);
	CHECK(1 == arr[2]);
}
#include "../catch/catch.hpp"
#include "utils.hpp"

int arr[] = {1, 2, 3 , 4, 5, 5 , 10, 42, 100};

TEST_CASE("Swap")
{
	Utils::Swap(arr, 0, 2);
	CHECK(3 == arr[0]);
	CHECK(1 == arr[2]);
}

TEST_CASE("Swap doubles")
{
	double arr[] = {1.2, 2.3, 3.6, 4.1, 5.0, 5.5, 1.0, 4.2, 10.0};
	Utils::Swap(arr, 0, 2);
	CHECK(3.6 == arr[0]);
	CHECK(1.2 == arr[2]);
}
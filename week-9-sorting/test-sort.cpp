#include "../catch/catch.hpp"
#include "insertion-sort.hpp"
#include <vector>

TEST_CASE("Test sort")
{
	std::vector<int> unsorted = { 12, -1, 300, 564, 0, -23, 22, 606 };
	std::vector<int> sorted = { -23, -1, 0, 12, 22, 300, 564, 606 };

	SECTION("Insertion sort")
	{
		REQUIRE(sorted != unsorted);
		InsertionSort::Sort(unsorted);
		REQUIRE(sorted == unsorted);
	}
}
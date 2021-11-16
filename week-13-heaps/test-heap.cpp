#include "../catch/catch.hpp"
#include "heap.hpp"

TEST_CASE("Test Heap")
{
	Heap h;
	REQUIRE(1 == h.GetParent(4));
	REQUIRE(0 == h.GetParent(2));

	REQUIRE(9 == h.GetLeft(4));
	REQUIRE(8 == h.GetRight(3));
}

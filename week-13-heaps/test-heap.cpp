#include "../catch/catch.hpp"
#include "heap.hpp"

TEST_CASE("Test Heap")
{
	Heap h;
	REQUIRE(-1 == h.GetParent(0));
	REQUIRE(1 == h.GetParent(4));
	REQUIRE(0 == h.GetParent(2));

	REQUIRE(9 == h.GetLeft(4));
	REQUIRE(8 == h.GetRight(3));

	h.Insert(12);
	REQUIRE(12 == h.Max());
	h.Insert(8);
	h.Insert(16);
	h.Insert(132);
	h.Insert(-12);
	h.Insert(12);

	REQUIRE(132 == h.Max());

	// valid heap
	h.Pop();
	// valid heap (132 gone)
	REQUIRE(16 == h.Max());
}

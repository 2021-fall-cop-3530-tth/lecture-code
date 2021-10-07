#include "../catch/catch.hpp"
#include "node.hpp"
#include "list.hpp"

TEST_CASE("Test List")
{
	List<int> l;
	l.InsertAtFront(10);
	REQUIRE(10 == l.GetFront()->GetValue());
}

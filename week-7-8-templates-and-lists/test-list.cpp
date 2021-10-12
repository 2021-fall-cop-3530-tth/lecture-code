#include "../catch/catch.hpp"
#include "node.hpp"
#include "list.hpp"

TEST_CASE("Test List")
{
	List<int> l;
	l.DeleteFromFront();
	REQUIRE(nullptr == l.GetFront());

	l.InsertAtFront(10);
	REQUIRE(10 == l.GetFront()->GetValue());

	l.InsertAtFront(5);
	// 5 -> 10
	REQUIRE(5 == l.GetFront()->GetValue());
	REQUIRE(10 == l.GetFront()->GetNext()->GetValue());

	l.DeleteFromFront();
	REQUIRE(10 == l.GetFront()->GetValue());
}

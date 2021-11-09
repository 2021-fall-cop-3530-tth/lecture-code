#include "../catch/catch.hpp"
#include "node.hpp"

TEST_CASE("Test Node")
{
	Node<int>* one = new Node<int>(1);
	REQUIRE(1 == one->GetValue());
	REQUIRE(nullptr == one->GetLeft());
	REQUIRE(nullptr == one->GetRight());

	Node<int>* two = new Node<int>(2, one);
	REQUIRE(2 == two->GetValue());
	REQUIRE(one == two->GetLeft());
	REQUIRE(nullptr == two->GetRight());
}
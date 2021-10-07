#include "../catch/catch.hpp"
#include "node.hpp"

TEST_CASE("Test Node")
{
	Node<int>* one = new Node<int>(1);
	REQUIRE(1 == one->GetValue());
	REQUIRE(nullptr == one->GetNext());
}
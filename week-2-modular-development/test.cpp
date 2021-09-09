#include "../catch/catch.hpp"
#include "main.cpp"

TEST_CASE("Testing 1-20 print")
{
	CHECK("1234567891011121314151617181920" == printToN(20));
}
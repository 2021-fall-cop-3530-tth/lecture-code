#include <iostream>
#include <string>
#include <unordered_map>

int main ()
{
	std::unordered_map<std::string, int> associativeArray;
	std::string f = "foo";
	associativeArray[f] = 12;
	associativeArray["baz"] = 77;
	associativeArray["foo"] = 87;

	std::cout << associativeArray[f] << std::endl;
	if (associativeArray.find("bar") == associativeArray.end())
	{
		std::cout << "Not in the map\n";
	}
	std::cout << associativeArray["bar"] << std::endl;

	if (associativeArray.find("bar") == associativeArray.end())
	{
		std::cout << "Not in the map\n";
	}

	return 0;
}
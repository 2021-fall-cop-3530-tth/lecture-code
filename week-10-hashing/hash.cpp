#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <unordered_set>

int main ()
{
	std::unordered_set<int> scores;
	scores.insert(99);
	scores.insert(89);
	scores.insert(89);

	if (scores.find(89) != scores.end())
	{
		std::cout << "It's in the list\n";
	}
	if (scores.find(87) == scores.end())
	{
		std::cout << "It's not in the list\n";
	}

	// for (std::unordered_set<int>::iterator i = scores.begin(); i != scores.end(); ++i)
	for (auto i = scores.begin(); i != scores.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

	for (const int& i: scores)
	{
		std::cout << i << std::endl;
	}

	return 0;
}
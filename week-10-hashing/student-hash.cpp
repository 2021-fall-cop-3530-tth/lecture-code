#include <iostream>
#include <unordered_set>
#include <string>
#include "student.hpp"

int main ()
{
	std::unordered_set<Student> roster;
	Student aT(123, "Alan Turing");
	roster.insert(aT);
	Student gH(123, "Grace Hopper");
	roster.insert(gH);

	std::cout << roster.find(gH)->GetName() << std::endl;
	std::cout << roster.find(aT)->GetName() << std::endl;
	return 0;
}
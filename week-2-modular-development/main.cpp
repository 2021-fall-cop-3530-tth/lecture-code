#include <iostream>
#include <sstream>
#include <string>
#include "student.hpp"

std::string printToN (int n);
int main ()
{
	std::cout << printToN(20);
	std::cout << std::endl;

	std::cout << 2;
	std::cout << 4;
	std::cout << 6;
	std::cout << 8;
	std::cout << 10;
	std::cout << 12;
	std::cout << 14;
	std::cout << 16;
	std::cout << 18;
	std::cout << 20;
	std::cout << std::endl;

	Student s(1.8, "John", "Doe");

	double student_2_gpa = 1.4;
	std::string student_2_fname = "Jane";
	std::string student_2_lname = "Doe";

	double student_3_gpa = 4.0;
	std::string student_3_fname = "Ada";
	std::string student_3_lname = "Lovelace";

	double student_4_gpa = 3.87;
	std::string student_4_fname = "Alan";
	std::string student_4_lname = "Turing";

	// array of stuff

	std::cout << s << "\n";
	std::cout << student_2_lname << ", " << student_2_fname << ": " << student_2_gpa << "\n";
	std::cout << student_3_lname << ", " << student_3_fname << ": " << student_4_gpa << "\n";
	std::cout << student_4_lname << ", " << student_3_fname << ": " << student_4_gpa << "\n";
	return 0;
}

std::string printToN (int n)
{
	std::ostringstream out;
	for (int i = 1; i <= n; ++i)
	{
		out << i;
	}

	return out.str();
}

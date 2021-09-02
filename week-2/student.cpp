#include "student.hpp"

Student::Student (double gpa, std::string fname, std::string lname)
{
	this->gpa = gpa;
	this->fname = fname;
	this->lname = lname;
}

std::ostream& operator<< (std::ostream& foo, const Student& s)
{
	foo << s.lname << ", " << s.fname << ": " << s.gpa;

	return foo;
}

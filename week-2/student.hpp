#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>
#include <iostream>

class Student
{
	private:
		std::string fname;
		std::string lname;
		double gpa;
	public:
		Student (double gpa, std::string fname, std::string lname);	

	friend std::ostream& operator<< (std::ostream& foo, const Student& s);
};

#endif /*STUDENT_HPP*/
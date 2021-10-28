#include "student.hpp"

Student::Student (int i, std::string n) : id(i), name(n)
{
}
bool Student::operator == (const Student& otherStudent) const
{
	return this->id == otherStudent.id && this->name == otherStudent.name;
}

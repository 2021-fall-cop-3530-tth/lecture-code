CXX = g++
CXXFLAGS = -std=c++11 -Wall

RULE: DEPENDENCIES
	COMMAND1
	COMMAND 2
	...

main: student.o main.cpp
	#$(CXX) $(CXXFLAGS) -o main main.cpp student.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@
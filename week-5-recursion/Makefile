# the compiler: gcc for C program, define as g++ for C++
CXX = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CXXFLAGS  = -g -Wall -std=c++11

OBJECTS = linear-search.o binary-search.o

main: main.cpp $(OBJECTS) linear-search.o
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) main *.o

test-build: test-search.cpp search.o ../catch/catch.o
	$(CXX) $(CXXFLAGS) -o test $^

test: test-search.cpp search.o ../catch/catch.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@ --success

# the compiler: gcc for C program, define as g++ for C++
CXX = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CXXFLAGS  = -g -Wall -std=c++11

clean:
	$(RM) main *.o

test-utils: test-utils.cpp utils.o ../catch/catch.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@ --success

test-node: test-node.cpp node.o ../catch/catch.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@ --success

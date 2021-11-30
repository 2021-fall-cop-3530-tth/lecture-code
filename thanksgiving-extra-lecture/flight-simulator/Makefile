CXX = g++
CXXFLAGS = -std=c++11 -g -Wall
GLUTFLAGS = -framework glut -framework opengl

SRCS = $(wildcard *.hpp)
OBJECTS = $(SRCS:%.hpp=%.o)

simulator: fly.cpp landscape.o cockpit.hpp
	$(CXX) $(CXXFLAGS) $(GLUTFLAGS) fly.cpp landscape.o -o $@
	./$@

clean:
	rm -rf *.dSYM test/*.dSYM
	$(RM) *.o *.gc* test/*.o test/*.gc* *.dSYM $(addprefix test/,$(TESTS)) core main $(CATCH)


# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o array.o
	$(CXX) $(CXXFLAGS) -o main_array main.o array.o

# The main.o target can be written more simply

main.o: main.cpp array.h
	$(CXX) $(CXXFLAGS) -c main.cpp

array.o: array.h

clean:
	rm *o main_array
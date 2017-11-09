all: main

CXXFLAGS+=-g -Wall
LDLIBS+=-lstdc++
main: Student.o main.o
Student.o: Student.cpp
main.o: main.cpp

all: main
CXX=clang++

CXXFLAGS+=-g -Wall -std=c++11
LDLIBS+=-lstdc++
main: Student.cpp GradStudent.cpp main.cpp

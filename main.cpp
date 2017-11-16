#include "GradStudent.h"
#include <string>
#include <stdio.h>
#include <iostream>

int main() {
	Student s(2033, "Julia");
	GradStudent g(2033, "Julia");
	g.addMajor("BSE");
	g.addMajor("EE");
	std::string studentString = s.toString();
	//std::cout << studentString << std::endl;
	printf("%s\n", studentString.c_str());
	printf("%s\n", g.toString().c_str());
	return 0;
}
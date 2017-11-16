#include "GradStudent.h"

GradStudent::GradStudent(int y, std::string n)
  : Student(y, n), _grad_year(y + 4) {}

GradStudent::~GradStudent() {}

void GradStudent::addMajor(std::string m) {
	_majors.push_back(m);
}

std::string GradStudent::toString() {
  std::string ret;
  ret = _name + " ";
  ret += std::to_string(_grad_year);
  
  for (auto m : _majors) {
	 ret += ("\n" + m);
  }
  return ret;
}
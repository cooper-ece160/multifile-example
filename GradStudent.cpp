#include "GradStudent.h"

GradStudent::GradStudent(int y, std::string n)
  : Student(y, n), _grad_year(y + 4) {}

GradStudent::~GradStudent() {}

std::string GradStudent::toString() {
  std::string ret;
  ret = _name + " ";
  ret += std::to_string(_grad_year);
  return ret;
}
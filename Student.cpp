#include "Student.h"
#include <string>
#include <stdio.h>
#include <sstream>

Student::Student(int y, std::string n) {
  _year = y;
  _name = n;
}

Student::~Student() {}

std::string Student::toString() {
  std::stringstream ss;
  ss << _name << " " << _year;
  
  std::string ret;
  ret = _name + " ";
  ret += std::to_string(_year);
  //printf("ret.size(): %ld\n", ret.size());
  //return ret;
  //return ss.str();
  return ret;
}
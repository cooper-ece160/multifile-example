#include <string>

#ifndef STUDENT_H
#define STUDENT_H
class Student {
 public:
	Student(int year, std::string name);
	~Student();
	
	// data fields
	int _year;
	std::string _name;
	
	virtual std::string toString();
};
#endif

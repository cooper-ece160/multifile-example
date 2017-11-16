#include "Student.h"

class GradStudent: public Student {
  int _grad_year;
  
 public:
  GradStudent(int year, std::string name);
  ~GradStudent();
	
  virtual std::string toString() override;
};
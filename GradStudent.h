#include "Student.h"
#include <vector>

class GradStudent: public Student {
  int _grad_year;
  std::vector<std::string> _majors;
  
 public:
  GradStudent(int year, std::string name);
  ~GradStudent();
  
  void addMajor(std::string m);
  virtual std::string toString() override;
};
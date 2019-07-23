/*
Mike Yoon
CS211

This is the Faculty class header.  
*/


#ifndef Faculty_h
#define Faculty_h
using namespace std;
#include"Person.h"

//Faculty inherits from the Person class
class Faculty: public Person 
{
  //Declaration of protected variables.
 protected:
  float salary;  //Salary earned per year
  int yearOfExp;  //Number of years of experience
  long departId;  //Department ID
  //Static counter for objects created.
  static long nextFacultyId;
  
 public:
  //Declaration of default constructors.
  Faculty();
  Faculty(float theSalary, int YearOfExp, long ID);
  ~Faculty();
  
  //Methods for retrieving variables.
  float getSalary();
  int getYearOfExp();
  long getDepartId();
  
  //Methods for setting variables.
  void setSalary(float setSalary);
  void setYearOfExp(int setYearofExp);
  void setDepartId(long setDepartID);	
};
#endif 

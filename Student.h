/*
Mike Yoon
CS211

This is the Student class header
*/

#ifndef Student_h
#define Student_h
#include<string>
#include<vector>
using namespace std;
#include"Person.h"
#include"Course.h"

//Student inherits from the Person class
class Student: public Person
{
  //Declaration of protected variables.
 protected:
  int yearOfStudy;  //Number of years of study
  string major;  //Student's major
  long advisorId;  //Advisor's Faculty ID
  //A vector of Course is needed.
  vector<Course> coursesTaken; 
  //Static counter for objects created.
  static long nextStId;
  
  //Declaration of default constructors.
 public:
  Student();
  Student(int YearStudy, string tMajor, long ID);
  ~Student();
  
  //Methods for retrieving variables.
  int getYearOfStudy();
  string getMajor();
  long getAdvisorId();
  vector<Course> getCoursesTaken();
  
  //Methods for setting variables.
  void setYearOfStudy( int setYearofStudy);
  void setMajor( string setMajor);
  void setAdvisorId(long setAdvisorID);
  void setCoursesTaken(Course courseObject);
  void setCoursesdropped(int i);
};
#endif 

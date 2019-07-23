/*
Mike Yoon
CS211

This is the Department class header file
*/


#ifndef department_h
#define department_h
#include<string>
using namespace std;

class Department
{
  //Declarations
 protected:
  long deptId;  //Department ID number
  string name;  //Department Name
  string location;  //Department Location
  long chairId;  //ID of the Department Chair
  static long nextDepartId;  //Counter for objects created
  
  //Declaration of default constructors.
 public:
  Department();
  Department(string cName, string cLocation, long cID);
  ~Department();
  
  //Methods for retrieving variables.
  long getdeptId();
  string getname();
  string getlocation();
  long getchairId();
  
  //Methods for setting variables.
  void setId (long setID);
  void setName (string setName);
  void setLocation (string setLocation);
  void setChairId(long setCID);
};
#endif 


/*
Mike Yoon
CS211

This is the Course class header   
*/

#ifndef course_h
#define course_h
#include<string>
using namespace std;

class Course
{
  //Declaration of protected variables.
 protected:
  long CRN;  //Course Reference Number ID 
  int maxAvailableSeats;
  string name;
  long departId;
  long assignedSeats;
  long isTaughtBy;
  //Static counter for objects created.
  static long nextCRN;
  
 public:
  //Declaration of default constructors.
  Course();
  Course(string cName, long cID, long cTaught, int MaxSeats);
  ~Course();
  
  //Methods for retrieving variables.
  long getCRN();
  int getMaxAvailableSeats();
  string getName();
  long getDepartId();
  long getAssignedSeats();
  long getIsTaughtBy();
  
  //Methods for setting variables.
  void setCRN(long setCRN);
  void setMaxAvailableSeats(int maxavailableseats);
  void setName(string setname);
  void setDepartId(long departid);
  void setAssignedSeats(long setAssignSeat);
  void setIsTaughtBy(long setTaught);
  void addAssignedSeat();
  void dropAssignedSeat();
};
#endif

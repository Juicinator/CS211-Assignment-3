/*
Mike Yoon
CS 211


This is the Course class file.
*/


#ifndef course_cpp
#define course_cpp
#include<iostream>
#include"Course.h"

//Initialization of static data member.
long Course::nextCRN = 200; 

//Implementation of default constructors.
Course::Course()
{
  CRN = nextCRN;
  maxAvailableSeats = 0;
  name = "EMPTY"; 
  departId = 0;
  assignedSeats = 0;
  isTaughtBy = 0;
  nextCRN++;
}

Course::Course(string cName, long cID, long cTaught, int MaxSeats)
{
  CRN = nextCRN;
  name = cName;
  departId = cID;
  assignedSeats = 0;
  isTaughtBy = cTaught;
  maxAvailableSeats = MaxSeats;
  nextCRN++;
}

Course::~Course(){}

//Implementation of methods for retrieving data.
long Course::getCRN()
{
  return CRN;
}

int Course::getMaxAvailableSeats()
{
  return maxAvailableSeats;
}

string Course::getName()
{
  return name;
}

long Course::getDepartId()
{
  return departId;
}

long Course::getAssignedSeats()
{
  return assignedSeats;
}

long Course::getIsTaughtBy()
{
  return isTaughtBy;
}

//Implementation for setting variables.
void Course::setCRN(long setCRN)
{
  CRN = setCRN;
}

void Course::setMaxAvailableSeats(int setMaxSeats)
{
  maxAvailableSeats = setMaxSeats;
}

void Course::setName(string setName)
{
  name = setName;
}

void Course::setDepartId(long setID)
{
  departId = setID;
}

void Course::setAssignedSeats(long setAssignSeat)
{
  assignedSeats = setAssignSeat;
}

void Course::setIsTaughtBy(long setTaught)
{
  isTaughtBy = setTaught;
}

//Implementation for incrementing and decrementing Assigned seats.
void Course::addAssignedSeat()
{
  assignedSeats++;
}

void Course::dropAssignedSeat()
{
  assignedSeats--;
}
#endif 

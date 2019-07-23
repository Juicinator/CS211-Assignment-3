/*
Mike Yoon
CS211

This is the Department class implementation file.
*/

#ifndef department_cpp
#define department_cpp
#include<iostream>
#include"Department.h"

//Initialization of static data member.
long Department::nextDepartId = 100;

//Implementation of default constructors.
Department::Department()
{
  deptId = nextDepartId;
  name = "EMPTY";
  location = "EMPTY";
  chairId  =  00;
  nextDepartId++;	
}

Department::Department(string cName, string cLocation, long cID)
{
  deptId = nextDepartId;
  name = cName;
  location = cLocation;
  chairId = cID;
  nextDepartId++;
}

Department::~Department(){}

//Implementation of methods for retrieving data.
long Department::getdeptId()
{
  return deptId;
}

string Department::getname()
{
  return name;
}

string Department::getlocation()
{
  return location;
}

long Department::getchairId()
{
  return chairId;
}

//Implementation for setting variables.
void Department::setId (long setID)
{
  deptId = setID;
}

void Department::setName (string setName)
{
  name = setName;
}

void Department::setLocation (string setLocation)
{
  location = setLocation;
}

void Department::setChairId(long setCID)
{
  chairId = setCID;
}
#endif 

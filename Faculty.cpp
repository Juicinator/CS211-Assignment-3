/*
Mike Yoon
CS211

This is the Faculty class implementation file
*/


#ifndef Faculty_cpp
#define Faculty_cpp
#include<iostream>
#include"Faculty.h"

//Initialization of static data member.
long Faculty::nextFacultyId = 600;

//Implementation of default constructors.
Faculty::Faculty()
{
  setId(nextFacultyId);
  salary = 0000.0;
  yearOfExp = 00;
  departId = 000;
  nextFacultyId++;
}

Faculty::Faculty(float theSalary, int YearOfExp, long ID)
{
  setId(nextFacultyId);
  salary = theSalary;
  yearOfExp = YearOfExp;
  departId = ID;
  nextFacultyId++;
}

Faculty::~Faculty(){}

//Implementation of methods for retrieving data.
float Faculty::getSalary()
{
  return salary;
}

int Faculty::getYearOfExp()
{
  return yearOfExp;
}

long Faculty::getDepartId()
{
  return departId;
}

//Implementation for setting variables.
void Faculty::setSalary(float setSalary)
{
  salary = setSalary;
}

void Faculty::setYearOfExp(int setYearofExp)
{
  yearOfExp = setYearofExp;
}

void Faculty::setDepartId(long setDepartID)
{
  departId = setDepartID;
}
#endif 


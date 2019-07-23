/*
Mike Yoon
CS211

This is the Student class implementation file.
*/

#ifndef Student_cpp
#define Student_cpp
#include<iostream>
#include"Student.h"

//Initialization of static data member.
long Student::nextStId = 500;

//Implementation of default constructors.
Student::Student()
{
  setId(nextStId);
  yearOfStudy = 0;
  major = "MAJOR";
  advisorId = 000;
  nextStId++;
}

Student::Student(int YearStudy, string tMajor, long ID)
{
  setId(nextStId);
  yearOfStudy = YearStudy;
  major = tMajor;
  advisorId = ID;
  nextStId++;
}

Student::~Student(){}

//Methods for retrieving variables.
int Student::getYearOfStudy()
{
  return yearOfStudy;
}

string Student::getMajor()
{
  return major;
}

long Student::getAdvisorId()
{
  return advisorId;
}

vector<Course> Student::getCoursesTaken()
{
  return coursesTaken;
}

//Methods for setting variables.
void Student::setYearOfStudy( int setYearofStudy)
{
  yearOfStudy = setYearofStudy;
}

void Student::setMajor( string setMajor)
{
  major = setMajor;
}

void Student::setAdvisorId(long setAdvisorID)
{
  advisorId = setAdvisorID;
}

void Student::setCoursesTaken(Course courseObject)
{
  coursesTaken.push_back(courseObject);
}

void Student::setCoursesdropped(int i)
{
  coursesTaken.erase(coursesTaken.begin() + i);
}
#endif 


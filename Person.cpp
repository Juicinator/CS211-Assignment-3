/*
Mike Yoon
CS211

This is the Person class implementation file
*/

#ifndef Person_cpp
#define Person_cpp
#include<iostream>
#include"Person.h"

//Declaration of default constructors.
Person::Person()
{
  id = 0000;
  name = "EMPTY";
  email = "EMPTY";
  address = "EMPTY";
  dateOfBirth = "EMPTY";
  gender = "EMPTY";
}

Person::Person(long theId, string theName, string theEmail, string theAddress, string theDateOfBirth, string theGender)
{
  id = theId;
  name = theName;
  email = theEmail;
  address = theAddress;
  dateOfBirth = theDateOfBirth;
  gender = theGender;
}

Person::~Person(){}

//Methods for retrieving variables.
long Person::getId()
{
  return id;
}

string Person::getName()
{
  return name;
}

string Person::getEmail()
{
  return email;
}

string Person::getAddress()
{
  return address;
}

string Person::getDateOfBirth()
{
  return dateOfBirth;
}

string Person::getGender()
{
  return gender;
}

//Methods for setting variables.
void Person::setId(long setID)
{
  id = setID;
}

void Person::setName(string setName)
{
  name = setName;
}

void Person::setEmail(string setEmail)
{
  email = setEmail;
}

void Person::setAddress(string setAddress)
{
  address = setAddress;
}

void Person::setDateOfBirth(string setdateOfBirth)
{
  dateOfBirth = setdateOfBirth;
}

void Person::setGender(string setGender)
{
  gender = setGender;
}

void Person::setMULTI(string setName, string setEmail, string setAddress, 
    string setdateOfBirth, string setGender)
{
  name = setName;
  email = setEmail;
  address = setAddress;
  dateOfBirth = setdateOfBirth;
  gender = setGender;
}
#endif 


/*
Mike Yoon
CS211

This is the Main program file.
A University object is created and a transaction file is processed.  
*/

#ifndef main_cpp
#define main_cpp
#include<iostream>
#include"University.h"

int main() 
{
  University csusm;
  csusm.ProcessTransactionFile("Transaction.txt");
  return 0;
}
#endif 


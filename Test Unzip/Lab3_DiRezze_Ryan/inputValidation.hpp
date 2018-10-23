/*********************************************************************
** Program name: War Game with Dice
** Author: Ryan DiRezze
** Date: October 14, 2018
** Description: Defines the function prototypes of the input validation
   functions.
*********************************************************************/

// begin the include guard
#ifndef INPUTVALIDATION_H
#define INPUTVALIDATION_H

// include the files that are required for the input validation function to run properly
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
#include<limits>

// works cited
   // (1) http://www.cplusplus.com/reference/istream/istream/ignore/

// function prototype
void intValidation(int&);
void charValidation(char&);

#endif   // end of include guard

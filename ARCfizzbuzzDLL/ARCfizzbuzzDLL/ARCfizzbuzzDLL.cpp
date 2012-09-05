// ARCfizzbuzzDLL.cpp : Defines the exported functions for the DLL application.
// Questions?  arcfizzbuzz@logicalmetaphysics.com

#include "stdafx.h"
//#define ARCFIZZBUZZDLL_EXPORTS  // this is defined on the cmd line
#include "ARCfizzbuzzDLL.h"
#include <iostream>

// This is an example of an exported variable
ARCFIZZBUZZDLL_API int nARCfizzbuzzDLL=0;

// This is an example of an exported function.
ARCFIZZBUZZDLL_API int fnARCfizzbuzzDLL(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see ARCfizzbuzzDLL.h for the class definition
CARCfizzbuzzDLL::CARCfizzbuzzDLL()
{
	return;
}


/* =============================================================================================================================
BKfizzbuzz - an exercize for the benefit of Headspring
Print out the numbers from 1 to 100, with the following exceptions:
•	If the number is divisible by 3, print "Fizz" instead. 
•	If the number is divisible by 5, print "Buzz" instead.
•	If the number is divisible by both 3 and 5, print "FizzBuzz" instead.
Your Assignment
1.	Implement a classic FizzBuzz console application as above. In addition, do the following:
2.	Implement the core FizzBuzz logic in a reusable library that is used by the console app to generate its output.
3.	Your FizzBuzz library should support output generation for numeric ranges other than 1 to 100, e.g., generate output for -32 to 5489
4.	Your FizzBuzz library should support tokens other than “Fizz” and “Buzz” as output for divisibility by 3 and 5 
5.	Your FizzBuzz library should be able to generate output to a destination other than the console.
6.	Your solution should include tests that demonstrate the correctness of your implementation. 
	You are free to use any unit test library with which you are comfortable.

---	---------	------------------------------------------------------------------------------------------------------------
Who	Date		Description
BK	9-02-2012	Created project

============================================================================================================================= */

// doFizzBuzz - DLL entry point
int CARCfizzbuzzDLL::doFizzBuzz(
			int rangeStart, 
			int rangeEnd,
			int divideVal1, 
			int divideVal2, 
			char divString1[], 
			char divString2[], 
			char divStringBoth[])
{
	int i;  // standard iterator
	for (i = rangeStart; i <= rangeEnd; i++)
	{
	    if (i % divideVal1 == 0 && i % divideVal2 == 0) 
		{ // divisible by both values? Say so
			std::cout << divStringBoth;
		}
	    else if (i % divideVal1 == 0) 
		{  // divisible by first value only?
			std::cout << divString1;
		}
	    else if (i % divideVal2 == 0) 
		{// divisible by second value only?
			std::cout << divString2;
		}
	    else std::cout << i;  //nothing special about this value, just print it
		std::cout << "\n";  // could have used endl, but this is obvious for old C ranch hands
	}
	return i;
}

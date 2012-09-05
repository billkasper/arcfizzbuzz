// ARCfizzbuzzTest.cpp : Defines the entry point for the console application.
// Questions?  arcfizzbuzz@logicalmetaphysics.com


#include "stdafx.h"
#include "..\ARCfizzbuzzDLL\ARCfizzbuzzDLL.h"


int _tmain(int argc, _TCHAR* argv[])
{
//	    Console::WriteLine(L"Hello World");
	CARCfizzbuzzDLL cafb;
//	int howMany = cafb.doFizzBuzz(-32,
	int howMany = cafb.doFizzBuzz(-32,
									5489,
									3,
									5,
									"Fizz",
									"Buzz",
									"FizzBuzz"
									);
    return howMany;

}


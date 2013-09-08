// TestC++11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <initializer_list>

class A
{
public:
	A(std::initializer_list<int> a) {}
};

int _tmain(int argc, _TCHAR* argv[])
{
	A aa = {1,2,3,4,5};
	return 0;
}

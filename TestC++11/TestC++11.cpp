// TestC++11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <initializer_list>
#include <iostream>

class A
{
public:
	A(std::initializer_list<int> a) {}
};

#ifdef _MSC_VER_
int _tmain(int argc, _TCHAR* argv[])
#else
int main(int argc, const char * argv[])
#endif
{
	std::cout << "Hello" << std::endl;
	A aa = {1,2,3,4,5};
	return 0;
}

#include "vector.h"
#include<iostream>

int main()
{
	Vector <double> v(1);
	v[0] = 2.5;

	std::cout << v[0];

	return 0;
}


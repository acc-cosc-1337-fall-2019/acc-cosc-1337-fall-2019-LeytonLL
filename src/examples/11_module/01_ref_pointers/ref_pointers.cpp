#include "ref_pointers.h"

//show that references and points can modify data pointed to

void ref(int &number, int* numberPtr)
{
	number = 500;
	*numberPtr = 1000;

}


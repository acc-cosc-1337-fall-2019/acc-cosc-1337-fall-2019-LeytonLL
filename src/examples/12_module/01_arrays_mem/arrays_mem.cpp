//write code for for stack_array and display each element to screen
#include"arrays_mem.h"
#include <iostream>
//element to screen

void stack_array()
{
	const int SIZE = 5;
	int hours[SIZE] = { 5, 10, 30, 20, 7 };
	hours[0] = 50; //access and modify
	//iterate an array
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << hours[i] << "\n";
	}

	std::cout << "\n";
	//iterate w for ranged
	for (auto hour : hours) //need to use & reference to modify
	{
		std::cout << hour << "\n";
	}
	std::cout << "\n";
	//pointer to first hours array element
	int* first_element = hours;
	std::cout << "first element: " << *first_element << "\n";
	std::cout << "Second element: " << *(first_element+1) << "\n";
	*first_element++;
	*first_element++;
	std::cout << "Third element: " << *(first_element ++) << "\n";
	*first_element--;

	std::cout << "Third element: " << *(first_element--) << "\n";

	int* hours_ptr = hours;

	//iterate array w a pointer forward
	for (int i = 0; i < SIZE; i ++)
	{ 
		std::cout << *hours_ptr << "/n";
		hours_ptr++;
	
	}

	//iterate pointer backwards
	for(int i = 0; i < SIZE; i ++)
	{ 
		//hours_ptr
	}



}

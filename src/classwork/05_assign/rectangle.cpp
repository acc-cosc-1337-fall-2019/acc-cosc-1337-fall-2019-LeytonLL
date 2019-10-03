#include "rectangle.h"
//Write include statement


/*
Write the class function code for the Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

Rectanglee::Rectanglee()
{
	width = 0;
	height = 0;
	calculate_area();
}

Rectanglee::Rectanglee(int valuea, int valueb)
{
	width = valuea;
	height = valueb;
	calculate_area();
}

int Rectanglee::get_area() const
{
	return area;
}

void Rectanglee::calculate_area()
{
	area = width * height;
}

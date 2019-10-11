//write include statemetns
#include "rectangle.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;

/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/

int main()
{

	acc::Rectanglee breathe (4, 5);
	cout << breathe;
	
	
	vector<acc::Rectanglee> flobots; //bands make for good variable names
	flobots.push_back(acc::Rectanglee(4, 5));
	flobots.push_back(acc::Rectanglee(10, 10));
	flobots.push_back(acc::Rectanglee(100, 10));

	//songs also make for good variable names.
	for (auto mayday : flobots)
	{
		cout << mayday;
	}

	return 0; 
}
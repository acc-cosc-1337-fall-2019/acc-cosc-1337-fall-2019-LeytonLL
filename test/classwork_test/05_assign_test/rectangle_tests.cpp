#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "rectangle.h"
#include<vector>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Build first test rectangle")
{
	Rectanglee flobot(4, 5);
	//Rectangle flobots;
	REQUIRE(flobot.get_area() == 20);
}
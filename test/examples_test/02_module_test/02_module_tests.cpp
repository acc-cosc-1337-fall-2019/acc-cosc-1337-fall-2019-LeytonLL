#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is_even function")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);
}

TEST_CASE("Test get generation")
{
	REQUIRE(get_generation(2000) == "Centenial");
	REQUIRE(get_generation(1990) == "Millenial");
	REQUIRE(get_generation(1975) == "Generation X");
	REQUIRE(get_generation(1960) == "Baby boomer");
	REQUIRE(get_generation(1940) == "Silent Generation");
	REQUIRE(get_generation(1776) == "Invalid");

}

TEST_CASE("Test menu function")
{
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(100) == "Invalid");
}
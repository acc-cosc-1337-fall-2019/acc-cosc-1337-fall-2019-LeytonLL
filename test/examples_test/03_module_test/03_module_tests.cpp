#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"
#include "vec.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test while loop sum of squares") 
{
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}

TEST_CASE("Test function value and reference params")
{
	int v = 5;
	int r = 10;;
	int c = 0;
	pass_by_val_and_ref(v, r, c);

	REQUIRE(v == 5);
	REQUIRE(r == 50);


}

TEST_CASE("Test for ranged loop by value: vector pass by ref")
{
	std::vector<int> nums = { 99,55,1, 3, 66 };
	std::vector<int> nums_expected = { 1000,1000,1000,1000,1000 };

	loop_vector_w_for_ranged_ref_var(nums);
	REQUIRE(nums == nums_expected);


}
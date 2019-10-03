#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount balance")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test BankAccount deposit")
{
	BankAccount account;
	account.deposit(100);

	REQUIRE(account.get_balance() == 600);
}

TEST_CASE("bank account withdrawl")
{
	BankAccount account;
	account.withdrawl(100);

	REQUIRE(account.get_balance() == 400);

}

TEST_CASE("Test bank account running balance")
{
	BankAccount account;
	account.deposit(100);
	account.withdrawl(50);

	REQUIRE(account.get_balance() == 550);
}

TEST_CASE("TEst BankAccount begin balance with initilazer")
{
	BankAccount account(1000);
	REQUIRE(account.get_balance() == 1000);
}
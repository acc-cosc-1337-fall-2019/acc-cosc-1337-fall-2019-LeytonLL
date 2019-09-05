#include "decisions.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	double over_time_hours = 0;
	double over_time_rate = 1.5 * hourly_rate;
	double over_time_pay = 0.0;
	if (hours > 40)
	{
		over_time_hours = hours - 40;
		hours = 40;
		over_time_pay = over_time_hours * over_time_rate;
		return hours * hourly_rate + over_time_pay;
	}
	else
		return hours * hourly_rate;
}

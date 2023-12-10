#pragma once
#include<iostream>

double celsius_to_fash(double cel)
{
	
	double f = 32.2 +  9.0/5* cel;
	return f;
}
double fahrenheit_to_cels(double fah)
{
	double c = 5.0 / 9.0 * (fah - 32.0);
	return c;
}

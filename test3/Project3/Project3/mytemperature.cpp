#include "mytemperature.h"
using namespace std;

double celsius_to_fah(double cel) {
	double f;
	f = cel * 9 / 5 + 32;
	return f;
}

double fahrenheit_to_cels(double fah)
{
	double c;
	c = (fah - 32) * 5 / 9;
	return c;
}

#include "Real.h"

void Real::calculating_the_logarithm(float const base_of_the_logarithm)
{
	float_number = log(float_number) / log(base_of_the_logarithm);
}

void Real::exponentiation(float const degree)
{
	float_number = pow(float_number, degree);
}

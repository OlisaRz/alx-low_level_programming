#include "main.h"

/**
 * largest_number - returns the largest of th 3
 * @: first integer
 * @: second integer
 * @: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int largest;
	if ( >= b && a >= c)
	{
	largest = a;
	}
	else if (b >= a && b >= c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}

	return (largest);
}

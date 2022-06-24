#include "main.h"
/**
 * factorial - return the factorial of a number
 * @n: argument to the function
 *
 * Description: return requird result
 *
 * Return: return integer value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

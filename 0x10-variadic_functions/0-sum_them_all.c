#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 *
 * @n: number of arguments
 *
 * Return: return sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int y;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (y = 0; y < n; y++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}


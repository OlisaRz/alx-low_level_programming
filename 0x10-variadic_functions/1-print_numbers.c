#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	va_list list;

	va_start(list, n);

	for (y = 0; y < n; y++)
	{
		if (separator != NULL && y != n - 1)
			printf("%i%s", va_arg(list, int), separator);
		else
			printf("%i", va_arg(list, int));
	}
	printf("\n");
	va_end(list);
}

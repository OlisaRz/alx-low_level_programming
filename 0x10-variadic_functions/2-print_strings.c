#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: delimiter
 * @n: n args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s;

	unsigned int count = 0;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		s = va_arg(args, char*);
		if (separator != NULL && count != n - 1)
		{
			if (s != NULL)
				printf("%s%s", s, separator);
			else
				printf("(nil)%s", separator);
		}
		else
				if (s != NULL)
					printf("%s", s);
				else
					printf("(nil)");
	}
	printf("\n");
	va_end(args);
}

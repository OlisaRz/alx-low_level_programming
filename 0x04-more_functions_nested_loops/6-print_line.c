#include "main.h"

/**
 * print_line - draws a straight line
 * @n: receives an integer
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		} else if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}



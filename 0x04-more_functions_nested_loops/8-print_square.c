#include "main.h"

/**
 * print_square - prints squares
 * @size: input integer
 * Return: Always 0
 */
void print_square(int size)
{
	int m, n;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (n = 0; n < size; n++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}


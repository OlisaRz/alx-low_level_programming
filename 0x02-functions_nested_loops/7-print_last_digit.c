#include "main.h"
/**
 * print_last_digit - print out the last digit of a number
 * @a: value that the function perform operation on
 * Description: print out the required result
 * Return: return the integer value 0
 */
int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		a = -a;
	}
	b = a % 10;
	if (b < 0)
	{
		b = -b;
	}
	_putchar(b + '0');
	return (b);
}

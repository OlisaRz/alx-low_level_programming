#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 * Description: prints lowercase alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}

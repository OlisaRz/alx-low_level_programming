#include "main.h"
/**
 * print_rev - print a string in reverse thn new line
 * @s: argument to the function
 * Description: return required result
 *
 * Return: return void
 *
 */
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (length = length - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}

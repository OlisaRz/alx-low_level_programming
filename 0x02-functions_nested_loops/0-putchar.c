#include "main.h"

/**
 * main - prints string "_putchar" using
 * my own headerfile and putchar () function prototyp
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char Rox[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(Rox[i]);
	}
	_putchar('\n');
	return (0);
}

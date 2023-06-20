#include <stdio.h>
/**
 * main - return all combinations of single digit number
 *
 * Description: prints all combinations of single digit number
 *
 * Return: return the integer value 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

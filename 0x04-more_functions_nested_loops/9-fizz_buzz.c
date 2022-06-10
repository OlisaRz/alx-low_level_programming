#include "main.h"
#include <stdio.h>
/**
 * main - print out numbers from 1 to 100
 * Return: return integer value
 */
int main(void)
{
	int no;

	for (no = 1; no <= 100; no++)
	{
		if (no % 3 == 0 && no % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		} else if (no % 3 == 0)
		{
			printf("%s", "Fizz");
		} else if (no % 5 == 0)
		{
			printf("%s", "Buzz");
		} else
		{
			printf("%d ", no);
		}
		if (no < 100)
			printf("%c", ' ');
	}
	printf("%c", '\n');
	return (0);
}

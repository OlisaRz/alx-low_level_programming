#include <stdio.h>
/**
 * main - print out the result of the function
 *
 * Description: print out reversed alphabets
 *
 * Return: return integer value 0
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

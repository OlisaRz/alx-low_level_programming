#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 * @argc: argument counter for integer
 * @argv: vector to arguments
 * Return: return 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}

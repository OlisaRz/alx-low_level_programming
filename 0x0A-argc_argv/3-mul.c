#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints result of multiplication, followed by new line
 * @argc: size of argv array, no. of ommand lines
 * @argv: array with program command line argument
 * Return: 0 if success and error if not
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
		printf("Error\n");
	else
	{
		a = strtol(argv[1], 0, 10);
		b = strtol(argv[2], 0, 10);
		printf("%d\n", a * b);
	}
	return (0);
}

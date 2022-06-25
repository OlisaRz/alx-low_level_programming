#include <stdio.h>

/**
 * main - prints its name then a new line
 * @argc: argument counter
 * @argv: pointer to array of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

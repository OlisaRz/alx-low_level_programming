#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size for allocation
 *
 * Return: pointer on success or terminate with 98
 */

void *malloc_checked(unsigned int b)

{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}

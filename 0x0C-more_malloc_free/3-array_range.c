#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array
 * if error null
 */
int *array_range(int min, int max)
{
	int *p;
	int x, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (x = 0; x < size && min <= max; x++, min++)
		*(p + x) = min;
	return (p);
}

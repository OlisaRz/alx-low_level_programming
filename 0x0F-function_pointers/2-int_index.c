#include <stdio.h>
/**
 * int_index - get first index for a condition
 * @array: first argument
 * @size: size of the array
 * @cmp: perform the condition check on the array
 *
 * Description: return the required result
 *
 * Return: return integer value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]) != 0)
			return (m);
	}
	return (-1);
}

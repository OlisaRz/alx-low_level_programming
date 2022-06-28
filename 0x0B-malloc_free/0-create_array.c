#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates array of chars, and initializes it with specific char
 * @size: size of the array in bytes
 * @c: initilize value of char datatype
 *
 * Description: return required result
 *
 * Return: return a char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(c));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

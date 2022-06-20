#include "main.h"
/**
 * _memset - fills first n byte of memory area pointed with byte b
 * @s: first argument
 * @b: second argument
 * @n: third argument
 *
 * Description: return required result
 *
 * Return: return a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

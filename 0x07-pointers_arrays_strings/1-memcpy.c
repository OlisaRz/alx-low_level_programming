#include "main.h"
/**
 * _memcpy() - copies n bytes frm mem src to dest
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 *
 * Description: return required result
 *
 * Return: return pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *_dest = dest;

	for (i = 0; i < n; i++)
	{
		*_dest++ = src[i];
	}
	return (dest);
}

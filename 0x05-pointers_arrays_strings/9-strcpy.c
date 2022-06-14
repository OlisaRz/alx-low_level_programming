#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies string pointed to by src,
 * plus the terminating null byt (\0),
 * to buffer pointed to by dest.
 * @dest: value to be valuate.
 * @src: value to be evaluate.
 * Return: dest, a char *.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

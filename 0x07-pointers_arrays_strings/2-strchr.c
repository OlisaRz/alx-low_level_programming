#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns a pointer to first occurrence of char c in string s
 * @s: first argument
 * @c: second argument
 *
 * Description: function that locates a character in a string
 *
 * Return: return char pointer
 */
char *_strchr(char *s, char c)
{
	char *src = s;

	while (*src++)
	{
		if (*src == c)
		{
			return (src);
		}
	}
	return (NULL);
}

#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strstr - finds a substring needle in string haystack
 * @haystack: first argument
 * @needle: second argument
 *
 * Description: return required results
 *
 * Return: return char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
return (0);
}

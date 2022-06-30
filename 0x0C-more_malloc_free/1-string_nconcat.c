#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string.
 * @s2: second string.
 * @n: limit of s2.
 *
 * Return: pointer to new allocated memory with s1
 * If error return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strDup;
	int x;
	unsigned int y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = 0;
	while (s1[x] != '\0')
		x++;
	strDup = malloc(sizeof(char) * (x + n + 1));
	if (strDup == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		strDup[x] = s1[x];
		x++;
	}
	while (y < n && s2[y] != '\0')
	{
		strDup[x] = s2[y];
		x++, y++;
	}
	strDup[x] = '\0';
	return (strDup);
}

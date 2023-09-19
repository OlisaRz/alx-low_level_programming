#include "main.h"
#include <ctype.h>
/**
 * _isalpha - To check for alphabetical characters
 * @c: value to be checked by function
 *
 * Description: return 1 if c is a letter otherwise return 0
 *
 * Return: return integer 0
 *
 */
int _isalpha(int c)
{
	int check;

	check = isalpha(c);

	if (check != 0)
	{
		return (1);
	}
	if (check == 0)
	{
		return (0);
	}
	return (0);
}

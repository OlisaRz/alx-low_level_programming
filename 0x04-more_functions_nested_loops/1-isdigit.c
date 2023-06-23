#include "main.h"
/**
 * _isdigit - check for digit
 * @c: Argument that function checks for digit
 * Description: Print required result
 * Return: return 1 if digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

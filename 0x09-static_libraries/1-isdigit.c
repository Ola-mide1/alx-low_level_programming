#include "main.h"

/**
 * _isdigit - checks for digits 0 through 9
 * @c: the character to be checked
 * Return: returns 0 and 1 depending on condition
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

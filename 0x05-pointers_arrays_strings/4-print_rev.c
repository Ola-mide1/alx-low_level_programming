#include "main.h"

/**
 * print_rev -> printing a string in reverse
 *@s: the string to be printed in rev
 */

void print_rev(char *s)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}
	for (counter -= 1; counter >= 0; counter --)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>

/**
 * puts2 -> puts2 function
 * @str: str parameter
 */
void puts(char *str)
{
	int len;

	len = strlen(str);
	for (i = 0; i < len; i ++)
		_putchar(str[i]);
	_putchar('\n');
}
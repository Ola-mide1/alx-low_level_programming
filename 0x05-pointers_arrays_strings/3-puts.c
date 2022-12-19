#include "main.h"
#include "3-main.c"

/**
 * _puts -> this is a function that puts
 * @str: a param to _puts function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

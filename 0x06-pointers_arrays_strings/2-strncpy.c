#include "main.h"
#include < string.h>
/**
 * _strncpy -> for copying purpose
 * @dest: first param
 * @src: 2nd param
 * @n: 3rd src
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

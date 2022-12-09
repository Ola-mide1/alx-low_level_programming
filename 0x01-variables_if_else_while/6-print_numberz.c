#include <stdio.h>
#include <stdlib.h>

/**
 * main - return digit base 10
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 *
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num;

	for (num = 0; num < 0; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - return lower case alphabet in reverse
 *
 * Returns: Always 0 (Success)
 *
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}

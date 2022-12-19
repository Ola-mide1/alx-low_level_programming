#include "main.h"

/**
 * rev_string -> reversing a string
 * @s: parameter s
 */

void rev_string(char *s)
{
	int c, revs;
	char character;

	for (c = '\0\; s[c] !=0; c++)
	{
	}
	revs = 0;
	for (c = c - 1; revs < c; revs++)
	{
		character = s[c];
		s[c] = s[revs];
		s[revs] = character;
		c -;
	}
}

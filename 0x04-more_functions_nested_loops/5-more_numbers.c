#include "main.h"

/**
 * more_numbers - prints numbers 0-14 x10
 */

void more_numbers(void)
{
	int n, count;

	for (count = 0; count <= 9; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % n) + '0');
		}
	_putchar('\n');
	}
}	

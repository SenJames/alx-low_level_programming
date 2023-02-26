#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Works for checking upper
 *
 * Description: Maybe works
 */
void more_numbers(void)
{
	int c, j;

	for (j = 0; j < 10; j++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar('1');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}

#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Works for checking upper
 *
 * Description: Maybe works
 */
void more_numbers(void)
{
	int c;

	for (c = 0; c <= 14; c++)
	{
		_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
	}
	_putchar('\n');
}

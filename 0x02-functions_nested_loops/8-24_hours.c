#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * jack_bauer - Works for checking upper
 *
 * Description: Maybe works
 */
void jack_bauer(void)
{
	int h, m, s;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
		}
	}
}

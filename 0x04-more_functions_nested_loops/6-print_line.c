#include <stdio.h>
#include "main.h"
/**
 * print_line - This prints a line
 * @n : The integer it takes in for printing
 *
 * Description : This function prints n number of lines
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

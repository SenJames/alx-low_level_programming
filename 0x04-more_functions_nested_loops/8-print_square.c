#include <stdio.h>
#include "main.h"
/**
 * print_square - This prints a line
 * @size : The integer it takes in for printing
 *
 * Description : This function prints n number of lines
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int j, i;

		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

#include <stdio.h>
#include "main.h"
/**
 * print_triangle - This prints a line
 * @size : The integer it takes in for printing
 *
 * Description : This function prints n number of lines
 */
void print_triangle(int size)
{
	int sp, ro, tr;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (ro = 0; ro <= (size - 1); ro++)
		{
			for (sp = 0; sp < (size - 1) - ro; sp++)
			{
				putchar(' ');
			}
			for (tr = 0; tr <= ro; tr++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}

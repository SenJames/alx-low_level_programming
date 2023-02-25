#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - Works for checking upper
 *
 * Description: Maybe works
 * Return: 0 (failure) or 1 (success)
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

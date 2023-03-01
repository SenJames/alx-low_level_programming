#include <stdio.h>
#include "main.h"
/**
 * print_sign - Works for checking upper
 * @n: check fot int
 *
 * Description: Maybe works
 * Return: 0 (failure) or 1 (success) or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + 0);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

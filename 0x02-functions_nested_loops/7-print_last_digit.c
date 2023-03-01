#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Works for checking upper
 * @c: check fot int
 *
 * Description: Maybe works
 * Return: 1(success)
 */
int print_last_digit(int c)
{
	int val;

	val = c % 10;
	if (val < 0)
		val = val * -1;
	_putchar(val + '0');
	return (val);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Works for checking upper
 * @c: check fot int
 *
 * Description: Maybe works
 */
int print_last_digit(int c)
{
	int val;

	val = c % 10;
	printf("%d", abs(val));
}

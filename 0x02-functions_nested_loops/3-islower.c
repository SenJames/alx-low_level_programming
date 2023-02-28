#include <stdio.h>
/**
 * _islower - Works for checking upper
 * @c: check fot int
 *
 * Description: Maybe works
 * Return: 0 (failure) or 1 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

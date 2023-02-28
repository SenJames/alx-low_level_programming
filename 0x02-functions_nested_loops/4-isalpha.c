#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Works for checking upper
 * @c: check fot int
 *
 * Description: Maybe works
 * Return: 0 (failure) or 1 (success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

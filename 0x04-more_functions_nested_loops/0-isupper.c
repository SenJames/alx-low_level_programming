#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * _isupper - A function that works
 * @c: Must be an integer
 *
 * Description: Takes an argument and checks if its uppercase
 *
 * Return: Always 1 (Success)
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

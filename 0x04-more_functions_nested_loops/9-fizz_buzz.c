#include <stdio.h>
/**
 * fizzbuzz - Works for fizzy drinks
 *
 * Description: Maybe works
 * Return: 0 (failure) or 1 (success)
 */
void fizzbuzz(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if ((c % 3 == 0) && (c % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", c);
		}
		if (c != 100)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry Point
 * Description: WOrks
 * Return: 0
 */

int main(void)
{
	fizzbuzz();
	return (0);
}

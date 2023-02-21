#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	int n, lt_dt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lt_dt = n % 10;
	/* your code goes there */
	printf("Last digit of %d is %d ", n, lt_dt);
	if (lt_dt > 5)
		printf("and is greater than %d\n", 5);
	else if (lt_dt == 0)
		printf("and is %d\n", 0);
	else if (lt_dt < 6 && lt_dt != 0)
		printf("and is less than %d and not %d\n", 6, 0);
	return (0);
}

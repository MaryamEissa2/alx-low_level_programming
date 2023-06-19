#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if n is positive or negative
 * Description: find if a number is positive or negative
 * aand it is the first tmie to write a description
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

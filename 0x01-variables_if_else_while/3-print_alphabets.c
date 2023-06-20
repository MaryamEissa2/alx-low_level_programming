#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase and upper
 *
 * Return: 0 always
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}


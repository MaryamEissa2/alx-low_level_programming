#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase and upper
 *
 * Return: 0 always
 */
int main(void)
{
	char ch[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int x;

	for (x = 0; x < 52 ; x++)
	{
		putchar(ch[x]);
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>
/**
 * main - prints the alphabet in lowecase
 *
 * Return: 0 always
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;

		putchar(ch);
	}
	putchar('\n');
	return (0);
}

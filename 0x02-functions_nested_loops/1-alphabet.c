#include <stdio.h>

void print_alphabet_x10(void);

/**
 * main - calling the print func
 *
 * Return: 0 always
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Description: create a loop to disp alphabitc letters
 * ans then print then
 * Return : no return value
 */
void print_alphabet_x10(void)
{
	char ch = 'a';

	for (ch = 'a' ; ch < 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - func that prints 10 times the alphabet
 * Description: unction that prints 10 times the alphabet
 * and write in 3 soures
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

#include "main.h"
/**
 * print_alphabet_x10 - func that prints 10 times the alphabet
 * Description: unction that prints 10 times the alphabet
 * and write in 3 soures
 * Reuturn: return nothing
 */
void print_alphabet_x10(void)
{
	char ch = 'a';

	int i;

	for (i = 0; i < 10; i++)
	{

	for (ch = 'a'; ch < 'z'; ch++)
	{
		_putchar(ch);
	}

	ch = 'a';
	}
	_putchar('\n');
}

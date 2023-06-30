#include "main.h"
/**
 * print_alphabet - prints 10 times the alphabet
 * Description: create a loop to disp alphabitc letters
 * ans then print then
 * Return : no return value
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

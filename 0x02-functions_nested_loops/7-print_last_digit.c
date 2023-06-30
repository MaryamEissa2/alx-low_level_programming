#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @r: parametr is integer
 * Return: interger always
 */
int print_last_digit(int r)
{
	if (r >= 0)
	{
		_putchar('0' + r % 10);
		return (r % 10);
	}
	else
	{
		_putchar('0' + (r * -1) % 10);
		return ((r * -1) % 10);
	}
}

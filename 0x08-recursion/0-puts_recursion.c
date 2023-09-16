#include <stdio.h>

/**
 * _puts_recursion - function that prints a string
 * @s: char pramater
 * Description: prints a string, followed by a new line
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}


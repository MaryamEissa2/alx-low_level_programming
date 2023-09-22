#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string parametr
 * Desciption: function that returns the length of a string
 * Return: integer always
 */
int _strlen_recursion(char *s)
{
	static int c = 0;

	if (*s)
	{
		c++;
		_strlen_recursion(++s);
	}
	return (c);
}

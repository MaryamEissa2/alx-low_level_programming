#include "main.h"
/**
 * _isalpha -  checks for alphabetic character
 * @c: parametr is integar
 * Return: integer always
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

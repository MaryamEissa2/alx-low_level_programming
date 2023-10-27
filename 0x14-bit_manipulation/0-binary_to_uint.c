#include "main.h"
/*
 * binary_to_uint - converts a binary number to an uint
 * @b: binary
 *
 * Return: unsigned int always
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);

		total = total * 2 +(*b++ - '0');
	}
	return (total);
}

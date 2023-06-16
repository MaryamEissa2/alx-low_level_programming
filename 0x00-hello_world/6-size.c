#include<stdio.h>
/**
 *  main - Entary point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu  byte(s)\n
Size of an int: %lu byte(s)
Size of a long int: %lu byte(s)
Size of a long long int: %lu byte(s)
Size of a float: %lu byte(s)",(unsigned)sizeof(char),
(unsigned)sizeof(int),(unsigned)sizeof(long long)
,(unsigned)sizeof(float));
	return(0);
}

#include "main.h"

/**
 * print_unsignedint - function that print an unsigned int.
 * @n: number to print.
 */
void print_unsignedint( unsigned int n)
{
	unsigned int num = n;

	if ((num / 10) > 0)
		print_unsigned(num / 10);

	_putchar((num % 10) + 48);
}
/**
 * unsigned_len - function that return unsigned int lenght.
 * @n: number to check.
 * Return: unsigned int lenght.
 */
int unsigned_len(unsigned int n)
{
	unsigned int m = n;
	int l = 1;


	while (m > 10)
	{
		m /= 10;
		l++;
	}
	return(l);
}

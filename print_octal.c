#include "main.h"

/**
 * print_octal - function that print an octal number of int.
 * @n: number to print.
 */

void print_octal(int n)
{
	unsigned int num = n;

	if ((num / 8) > 0)
		print_octal(num / 8);

	_putchar((num % 8) + 48);
}

/**
 * octal_len - function that return octal lenght.
 * @n: number to check.
 * Return: octal lenght.
 */

int octal_len(int n)
{
	unsigned int m = n;
	int l = 0;

	if (n == 0)
		return (1);
	while (m > 0)
	{
		l++;
		m /= 8;
	}
	return (l);
}

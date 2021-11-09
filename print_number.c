#include "main.h"

/**
 * print_number - function that print a number.
 * @n: number to print.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + 48);
}

/**
 * number_len - function that return int lenght.
 * @n: number to check.
 * Return: int lenght.
 */
int number_len(int n)
{
	int m = n;
	int l = 1;

	if (m < 0)
	{
		m = -m;
		l++;
	}
	while (m > 10)
	{
		m /= 10;
		l++;
	}
	return (l);
}

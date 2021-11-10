#include "main.h"

/**
 * print_binary - function that print a binary number of int.
 * @n: number to print.
 */
void print_binary(int n)
{
	unsigned int num = n;

	if ((num / 2) > 0)
		print_binary(num / 2);

	_putchar((num % 2) + 48);
}
/**
 * binary_len - function that return binary lenght.
 * @n: number to check.
 * Return: binary lenght.
 */
int binary_len(int n)
{
	unsigned int m = n;
	int l = 0;

	if (n == 0)
		return (1);

	while (m > 0)
	{
		l++;
		m /= 2;
	}
	return (l);
}

#include "main.h"


/**
 * print_hexadecimal_maj - function that print hexadecimal number of int.
 * @n: number to print.
 */
void print_hexadecimal_maj(int n)
{
	unsigned int num = n;

	if ((num / 16) > 0)
		print_hexadecimal_maj(num / 16);
	if (num % 16 < 10)
	_putchar((num % 16) + 48);
	else
	_putchar((num % 16) + 55);
}
/**
 * print_hexadecimal_min - function that print a hexadecimal number of int.
 * @n: number to print.
 */
void print_hexadecimal_min(int n)
{
	unsigned int num = n;

	if ((num / 16) > 0)
		print_hexadecimal_min(num / 16);
	if (num % 16 < 10)
	_putchar((num % 16) + 48);
	else
	_putchar((num % 16) + 87);
}
/**
 * hexadecimal_len - function that return hexadecimal lenght.
 * @n: number to check.
 * Return: hexadecimal lenght.
 */
int hexadecimal_len(int n)
{
	unsigned int m = n;
	int l = 0;

	if (n == 0)
		return (1);
	while (m > 0)
	{
		l++;
		m /= 16;
	}
	return (l);
}

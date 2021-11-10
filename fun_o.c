#include "main.h"

/**
 * pr_octal - function that print a binary number of int.
 * @x: integer to print.
 * Return: octal number length
 */

int pr_octal(va_list x)
{
	int n = va_arg(x, int);

	print_octal(n);
	return (octal_len(n));
}

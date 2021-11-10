#include "main.h"

/**
 * pr_binary - function that print a binary number of int.
 * @x: integer to print.
 * Return: binary number length
 */
int pr_binary(va_list x)
{
	int n = va_arg(x, int);

	print_binary(n);
	return (binary_len(n));
}

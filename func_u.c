#include "main.h"

/**
 * pr_unsigned - function that print an unsigned integer.
 * @x: integer to print.
 * Return: number length
 */
int pr_unsigned(va_list x)
{
	unsigned int n = va_arg(x, int);

	print_unsignedint(n);
	return (unsigned_len(n));
}

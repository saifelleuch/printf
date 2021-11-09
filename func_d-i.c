#include "main.h"

/**
 * pr_int - function that print an integer.
 * @x: integer to print.
 * Return: number length
 */
int pr_int(va_list x)
{
	int n = va_arg(x, int);

	print_number(n);
	return (number_len(n));
}

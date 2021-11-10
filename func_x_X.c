#include "main.h"

/**
 * pr_hex_maj - function that print a hexadecimal number of int.
 * @x: integer to print.
 * Return: hexadecimal number length
 */
int pr_hex_maj(va_list x)
{
	int n = va_arg(x, int);

	print_hexadecimal_maj(n);
	return (hexadecimal_len(n));
}

/**
 * pr_hex_min - function that print a hexadecimal number of int.
 * @x: integer to print.
 * Return: hexadecimal number length
 */
int pr_hex_min(va_list x)
{
	int n = va_arg(x, int);

	print_hexadecimal_min(n);
	return (hexadecimal_len(n));

}

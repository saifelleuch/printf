#include "main.h"

/**
 * _printf - unction that produces output according to a format.
 * @format: list of types of arguments.
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list x;
	int n, l;
	op_t ab[] = {
		{"c", pr_char},
		{"s", pr_string},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(x, format);
	n = _strlen(format);
	l = pre_printf(format, x, ab, n);
	va_end(x);
	return (l);
}

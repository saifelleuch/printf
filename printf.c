#include "main.h"

/**
 * _printf - unction that produces output according to a format.
 * @format: list of types of arguments.
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list x;
	int i = 0, j = 0;
	int n;
	op_t ab[] = {
		{"c", pr_char},
		{"s", pr_string},
		{NULL, NULL}
	};
	va_start(x, format);
	n = _strlen(format);
	while (i < n)
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
		while (ab[j].op != NULL)
		{
			if (*ab[j].op == format[i])
				ab[j].f(x);
			j++;
		}
		i++;
		}
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
		}
	}
	va_end(x);
	return (0);
}

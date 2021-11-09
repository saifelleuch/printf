#include "main.h"

/**
 * pre_printf - function before printf
 * @format: list of types of arguments
 * @x: va_list
 * @ab: array of struct
 * @n: strlen of format
 *
 * Return: return l
 */

int pre_printf(const char *format, va_list x, op_t ab[], int n)
{
	int i = 0, j = 0, l = 0;
	int check;

	while (i < n)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				i++;
				l++; }
			else
			{
				j = 0;
				check = 0;
				while (ab[j].op != NULL)
				{
					if (*ab[j].op == format[i])
					{
						l += ab[j].f(x);
						check = 1; }
					j++; }
				if (check == 0)
				{
					_putchar('%');
					_putchar(format[i]); }
				i++; }

		}
		if (format[i] != '%' && format[i] != '\0')
		{
			_putchar(format[i]);
			l++;
			i++; }
	}
	return (l);
}

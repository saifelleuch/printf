#include "main.h"

/**
 * pr_char - function that prints a character.
 * @x: charater to print.
 */

void pr_char(va_list x)
{
	_putchar(va_arg(x, int));
}

/**
 * pr_string - function that prints a string.
 * @x: string to print.
 */

void pr_string(va_list x)
{
	int i = 0;
	char *str;

	str = va_arg(x, char *);
	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i++;
	}

}

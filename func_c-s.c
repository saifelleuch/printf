#include "main.h"

/**
 * pr_char - function that prints a character.
 * @x: charater to print.
 * Return: 1
 */
int pr_char(va_list x)
{
	_putchar(va_arg(x, int));
	return (1);
}

/**
 * pr_string - function that prints a string.
 * @x: string to print.
 * Return: string length
 */
int pr_string(va_list x)
{
	int i = 0;
	int l;
	char *str;

	str = va_arg(x, char *);
	if (str == NULL)
		str = "(null)";
	l = _strlen(str);
	while (i < l)
	{
		_putchar(str[i]);
		i++;
	}
	return (l);

}

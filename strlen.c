#include "main.h"

/**
 * _strlen - function that returns string length.
 * @s: pointer to string.
 * Return: string length.
 */

int _strlen(const char *s)
{
	int n = 0;

	while (s[n])
		n++;
	return (n);
}

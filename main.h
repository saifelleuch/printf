#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct ops - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct ops
{
	char *op;
	int (*f)(va_list x);
} op_t;

int _putchar(char c);
int _strlen(const char *s);
int pr_char(va_list x);
int pr_string(va_list x);
int _printf(const char *format, ...);
#endif

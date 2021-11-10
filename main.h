#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
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
int pr_int(va_list x);
void print_number(int n);
int number_len(int n);
void print_binary(int n);
int binary_len(int n);
int pr_binary(va_list x);
void print_unsignedint( unsigned int n);
int unsigned_len(unsigned int n);
int pr_unsigned(va_list x);
int pr_octal(va_list x);
void print_octal(int n);
int octal_len(int n);
int pre_printf(const char *format, va_list x, op_t ab[], int n);
int _printf(const char *format, ...);
#endif

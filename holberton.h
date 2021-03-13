#ifndef HOL_H
#define HOL_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The format
 * @f: The function associated
 */
typedef struct fmt
{
	// 
	char fmt;
	int (*fn)(va_list);
} fmt_t;

int _putchar(char a);
int _printf(const char *format, ...);

/* Funtions to print chars and strings */
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

/* Functions to print numbers */
int print_int(va_list);
int print_binary(va_list);

int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal(va_list);
int print_hexa_upper(va_list);

#endif /* HOL_H */

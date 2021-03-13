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
int print_char(va_list types);
int print_string(va_list types);
int print_percent(va_list types);

/* Functions to print numbers */
int print_int(va_list types);
int print_binary(va_list types);

int print_unsigned(va_list types);
int print_unsgd_octal(va_list types);
int print_hexadecimal(va_list types);
int print_hexa_upper(va_list types);

#endif /* HOL_H */

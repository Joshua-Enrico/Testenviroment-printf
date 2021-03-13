#ifndef HOL_H
#define HOL_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The format
 * @f: The function associated
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list);
};

typedef struct fmt fmt_t;

int _putchar(char a);

int _printf_self(const char *format, ...);

/* Funtions to print chars and strings */
int print_char(va_list types);
int print_string(va_list types);
int print_percent(va_list types);

/* Functions to print numbers */
/*
int print_int(va_list types);
int print_binary(va_list types);

int print_unsigned(va_list types);
int print_unsgd_octal(va_list types);
int print_unsgd_hexadecimal(va_list types);
int print_hexa_upper(va_list types);
*/

/****************** UTILS ******************/
int len(char *);

#endif /* HOL_H */

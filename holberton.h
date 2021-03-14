#ifndef HOL_H
#define HOL_H
#include <stdarg.h>
#include <stdio.h>

#define BUFF_SIZE 1024

/**
 * struct op - Struct op
 *
 * @op: The format
 * @f: The function associated
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[]);
};

typedef struct fmt fmt_t;

int _printf(const char *format, ...);

/* Funtions to print chars and strings */
int print_char(va_list types, char buffer[]);
int print_string(va_list types, char buffer[]);
int print_percent(va_list types, char buffer[]);

/* Functions to print numbers */

int print_int(va_list types, char buffer[]);

/* funciones avanzadas*/
int print_unsigned(va_list types, char buffer[]);
int print_octal(va_list types, char buffer[]);
int print_hexadecimal(va_list types, char buffer[]);
int print_hexa_upper(va_list types, char buffer[]);
int print_hexa(va_list list, char map_to[], char buffer[]);
/*int print_binary(va_list types);

int print_unsigned(va_list types);
int print_unsgd_octal(va_list types);
int print_hexadecimal(va_list types);
int print_hexa_upper(va_list types);
*/
int print_binary(va_list types, char buffer[]);






/****************** UTILS ******************/
int len(char *);
int count_digits(unsigned int);
unsigned int ten_to_power(int);

#endif /* HOL_H */

#ifndef HOL_H
#define HOL_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

int _putchar(char a);
int _printf(const char *format, ...);
int op_c(va_list op_l);
int op_s(va_list op_l);
int op_mod(va_list op_l);
int op_d(va_list op_l);
#endif /* HOL_H */

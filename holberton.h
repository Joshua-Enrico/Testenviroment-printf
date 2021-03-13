#ifndef HOL_H
#define HOL_H
#include <stdarg.h>

int _putchar(char c);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);	

void new_function();
int _printf(const char *format, ...);

/**
 * struct op_o - Struct fly_ops
 * Desc: Flying operators
 * @op: The operator
 * @stargate: The function associated
 */
typedef struct op_o
{
	char *op;
	void (*stargate)(va_list valist);
} op_t;

int op_c(va_list op_d);/*char*/
int op_ss(va_list op_d);/*string*/
int op_i(va_list op_d);/*entero*/
int op_dd(va_list op_d);/*number of integer inter*/
int op_z(va_list op_d);/* % */
#endif /* HOL_H*/

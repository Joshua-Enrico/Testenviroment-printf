#include "holberton.h"
#include <stdio.h>

/************************* PRINT CHAR *************************/

/**
 * print_char - Prints a char
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * Return: Number of chars printed
 */
int print_char(va_list types, char buffer[], int flags)
{
	char c = va_arg(types, int);

	return (write(1, &c, 1));
}
/************************* PRINT A STRING *************************/
/**
 * print_string - Prints a string
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * Return: Number of chars printed
 */
int print_string(va_list types, char buffer[], int flags)
{
	char *str = va_arg(types, char *);

	if (str == NULL)
		return (write(1, "(null)", 6));

	return (write(1, str, len(str)));
}
/************************* PRINT PERCENT SIGN *************************/
/**
 * print_percent - Prints a percent sign
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * Return: Number of chars printed
 */
int print_percent(va_list types, char buffer[], int flags)
{
	return (write(1, "%%", 1));
}

/************************* PRINT INT *************************/
/**
 * print_int - Prints ints
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * Return: Number of chars printed
 */
int print_int(va_list types, char buffer[], int flags)
{
	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	int n = va_arg(types, int);
	unsigned int num;

	if (n == 0)
		return (write(1, "0", 1));

	buffer[BUFF_SIZE - 1] = '\0';

	num = (unsigned int)n;

	if (n < 0)
	{
		num = (unsigned int)((-1) * n);
		is_negative = 1;
	}

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	if (is_negative)
		buffer[i--] = '-';
	else if (flags & F_PLUS)
		buffer[i--] = '+';
	else if (flags & F_SPACE)
		buffer[i--] = ' ';

	i++;

	return (write(1, &buffer[i], BUFF_SIZE - i) - 1);
}

/************************* PRINT BINARY *************************/
/**
 * print_binary - Prints an unsigned number
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * Return: Numbers of char printed.
 */
int print_binary(va_list types, char buffer[], int flags)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	n = va_arg(types, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			count++;
		}
	}
	return (count);
}

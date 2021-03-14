#include "holberton.h"
#include <stdio.h>

/**
 * print_char - Prints a char
 * @list: List of arguments
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);
	return write(1, &c, 1);
}

/**
 * print_string - Prints a string
 * @list: List of arguments
 */
int print_string(va_list list)
{
    int length = 0;
	char *str = va_arg(list, char *);

    if (str == NULL)
        return write(1, "(null)", 6);

	return write(1, str, len(str));
}

/**
 * print_percent - Prints a percent sign
 * @list: List of arguments
 */
int print_percent(va_list list)
{
	char p = '%';
	return write(1, &p, 1);
}

int print_int(va_list types)
{

	unsigned int g, f, c = 0, i = 0;
	unsigned long int b = 1;
	int num = va_arg(types, int);

	if (num == 0)
	{

		write(1, &num, 1);
		return (i + 1);
	}
	if (num < 0)
	{
		write(1, '-', 1);
		g = num * (-1);
	}
	else
	{
		g = num;
	}

	f = g;
	while (g != 0)
	{
		g = g / 10;
		b = b * 10;
		c++;
	}
	b = b / 10;
	i = c;
	while (c != 0)
	{
		char ch = (f / b) + '0';
		write(1, &ch, 1);

		f = f % b;
		b = b / 10;
		c--;
	}
	if (num < 0)
		i++;

	return (i);
}

int print_binary(va_list types)
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

/**
 * print_unsigned - Prints an unsigned number
 * @list: Lista of arguments
 */
int print_unsigned(va_list list)
{
    int digits, divisor;
    char cnum = '0';
    unsigned int num = va_arg(list, unsigned int);

    digits = count_digits(num);
    divisor = ten_to_power(digits - 1);

    while (divisor > 0)
    {
        cnum = (num / divisor) + '0';
        write(1, &cnum, 1);
        num %= divisor;
        divisor /= 10;
    }

    return (digits);
}

/**
 * print_unsigned - Prints an unsigned number in octal notation
 * @list: Lista of arguments
 */
int print_octal(va_list list)
{
	int i = 29;
	char num_octal_c[30];
	unsigned int num = va_arg(list, unsigned int);

	if (num == 0)
		return write(1, "0", 1);

	num_octal_c[30] = '\0';

	while (num > 0)
	{
		num_octal_c[i--] = (num % 8) + '0';
		num /= 8;
	}
	
	i++;

	write(1, &num_octal_c[i], 30 - i);

	return (30 - i);
}

/**
 * print_unsigned - Prints an unsigned number in hexadecimal notation
 * @list: Lista of arguments
 */
int print_hexadecimal(va_list list)
{
	return print_hexa(list, "0123456789abcdef");
}

/**
 * print_unsigned - Prints an unsigned number in upper hexadecimal notation
 * @list: Lista of arguments
 */
int print_hexa_upper(va_list list)
{
	return print_hexa(list, "0123456789ABCDEF");
}

/**
 * print_hexa - Prints a hexadecimal number in lower or upper
 * @list: List of arguments
 * @map_to: Array of values to map the number to
 */
int print_hexa(va_list list, char map_to[])
{
	int i = 29;
	char num_hexa_c[30];
	unsigned int num = va_arg(list, unsigned int);

	if (num == 0)
		return write(1, "0", 1);

	num_hexa_c[30] = '\0';

	while (num > 0)
	{
		num_hexa_c[i--] = map_to[num % 16];
		num /= 16;
	}
	
	i++;

	write(1, &num_hexa_c[i], 30 - i);

	return (30 - i);
}
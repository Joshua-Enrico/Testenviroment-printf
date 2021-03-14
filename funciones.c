#include "holberton.h"
#include <stdio.h>

/**
 * print_char - Prints a char
 * @list: List of arguments
 */
int print_char(va_list list, char buffer[])
{
	char c = va_arg(list, int);
	return write(1, &c, 1);
}

/**
 * print_string - Prints a string
 * @list: List of arguments
 */
int print_string(va_list list, char buffer[])
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
int print_percent(va_list list, char buffer[])
{
	char p = '%';
	return write(1, &p, 1);
}

int print_int(va_list types, char buffer[])
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

int print_binary(va_list types, char buffer[])
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
int print_unsigned(va_list list, char buffer[])
{
		int i = BUFF_SIZE - 2;
    unsigned int num = va_arg(list, unsigned int);

		if (num == 0)
			return write(1, "0", 1);

		buffer[BUFF_SIZE - 1] = '\0';

		while (num > 0)
		{
			buffer[i--] = (num % 10) + '0';
			num /= 10;
		}

		i++;

		return (write(1, &buffer[i], BUFF_SIZE - i) - 1);
}

/**
 * print_unsigned - Prints an unsigned number in octal notation
 * @list: List of arguments
 */
int print_octal(va_list list, char buffer[])
{
	int i = BUFF_SIZE - 2;
	unsigned int num = va_arg(list, unsigned int);

	if (num == 0)
		return write(1, "0", 1);

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 8) + '0';
		num /= 8;
	}

	i++;

	return (write(1, &buffer[i], BUFF_SIZE - i) - 1);
}

/**
 * print_unsigned - Prints an unsigned number in hexadecimal notation
 * @list: Lista of arguments
 */
int print_hexadecimal(va_list list, char buffer[])
{
	return print_hexa(list, "0123456789abcdef", buffer);
}

/**
 * print_unsigned - Prints an unsigned number in upper hexadecimal notation
 * @list: Lista of arguments
 */
int print_hexa_upper(va_list list, char buffer[])
{
	return print_hexa(list, "0123456789ABCDEF", buffer);
}

/**
 * print_hexa - Prints a hexadecimal number in lower or upper
 * @list: List of arguments
 * @map_to: Array of values to map the number to
 */
int print_hexa(va_list list, char map_to[], char buffer[])
{
	int i = BUFF_SIZE - 2;
	unsigned int num = va_arg(list, unsigned int);

	if (num == 0)
		return write(1, "0", 1);

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = map_to[num % 16];
		num /= 16;
	}
	
	i++;

	return (write(1, &buffer[i], BUFF_SIZE - i) - 1);
}

/************************* PRINT NON PRINTABLE *************************/
int print_non_printable(va_list list, char buffer[])
{
	int i = 0, offset = 0;
	char *str = va_arg(list, char *);

	if (str == NULL)
		return write(1, "(null)", 6);

	while (str[i] != '\0')
	{
		if (is_printable(str[i]))
			buffer[i + offset] = str[i];
		else
			offset += append_hexa_code(str[i], buffer, i + offset);

		i++;
	}

	buffer[i + offset] = '\0';

	return (write(1, buffer, i + offset));
}
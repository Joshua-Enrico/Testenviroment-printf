#include "holberton.h"
#include <stdio.h>

/**
 * print_char - Prints a char
 * @list: List of arguments
 */
int print_char(va_list list, char buffer[], int flags)
{
	char c = va_arg(list, int);
	return write(1, &c, 1);
}

/**
 * print_string - Prints a string
 * @list: List of arguments
 */
int print_string(va_list list, char buffer[], int flags)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
			return write(1, "(null)", 6);

	return write(1, str, len(str));
}

/**
 * print_percent - Prints a percent sign
 * @list: List of arguments
 */
int print_percent(va_list list, char buffer[], int flags)
{
	return write(1, "%%", 1);
}

int print_int(va_list types, char buffer[], int flags)
{
	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	int n = va_arg(types, int);
	unsigned int num;

	if (n == 0)
		return write(1, "0", 1);

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

/**
 * print_unsigned - Prints an unsigned number
 * @list: Lista of arguments
 */
int print_unsigned(va_list list, char buffer[], int flags)
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
int print_octal(va_list list, char buffer[], int flags)
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
int print_hexadecimal(va_list list, char buffer[], int flags)
{
	return print_hexa(list, "0123456789abcdef", buffer, flags);
}

/**
 * print_unsigned - Prints an unsigned number in upper hexadecimal notation
 * @list: Lista of arguments
 */
int print_hexa_upper(va_list list, char buffer[], int flags)
{
	return print_hexa(list, "0123456789ABCDEF", buffer, flags);
}

/**
 * print_hexa - Prints a hexadecimal number in lower or upper
 * @list: List of arguments
 * @map_to: Array of values to map the number to
 */
int print_hexa(va_list list, char map_to[], char buffer[], int flags)
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

/************************* PRINT POINTER *************************/
/**
 * print_pointer - Prints the value of a pointer variable
 * @list: List of arguments
 * @buffer: Buffer array to handle print
 * 
 * Return: Number of chars printed
 */
int print_pointer(va_list list, char buffer[], int flags)
{
	int i = BUFF_SIZE - 2;
	unsigned long num_addrs;
	char map_to[] = "0123456789abcdef";
	void *addrs = va_arg(list, void *);
	
	if (addrs == NULL)
		return write(1, "(nil)", 5);
	
	buffer[BUFF_SIZE - 1] = '\0';
	num_addrs = (unsigned long) addrs;

	while (num_addrs > 0)
	{
		buffer[i--] = map_to[num_addrs % 16];
		num_addrs /= 16;
	}
	
	buffer[i--] = 'x';
	buffer[i] = '0';

	return (write(1, &buffer[i], BUFF_SIZE - i) - 1);
}

/************************* PRINT NON PRINTABLE *************************/
/**
 * print_non_printable - Prints ascii codes in hexa of non printable chars
 * @list: List of arguments
 * @buffer: Buffer array to handle print
 * 
 * Return: Number of chars printed
 */
int print_non_printable(va_list list, char buffer[], int flags)
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
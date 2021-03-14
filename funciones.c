
#include "holberton.h"

int print_char(va_list list)
{
	char c = va_arg(list, int);
	write(1, &c, 1);

    return (1);
}

int print_string(va_list list)
{
	char *str = va_arg(list, char *);

    if (str == NULL)
        str == "(null)";

	write(1, str, len(str));

	return (0);
}

int print_percent(va_list types)
{
	char p = '%';
	write(1, &p, 1);

	return (1);
}

int print_int(va_list types)
{
    /*caso de prueba*/
    /*_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);*/

	unsigned int g, f, c = 0, i = 0;
	unsigned long int b = 1;
	int num = va_arg(types, int);

	if (num == 0)
	{
		_putchar(num + '0');
		return (i + 1);
	}
	if (num < 0)
	{
		_putchar('-');
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
		_putchar((f / b) + '0');
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
}

int print_unsigned(va_list types)
{

}
int print_unsgd_octal(va_list types)
{
}
int print_unsgd_hexadecimal(va_list types)
{
}
int print_hexa_upper(va_list types)
{
}

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
		write(1 , '-', 1);
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



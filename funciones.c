
#include "holberton.h"

int print_char(va_list list)
{
	char c = va_arg(list, int);
	write(1, &c, 1);

	return (0);
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

	return 1;
}

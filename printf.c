#include "holberton.h"

int _printf(const char *format, ...)
{
    va_list list;
    int contador = 0;
    int i = 0, j = 0;

    va_start(list, format);

    for (i = 0; format && format[i] != '\0'; i++)
    {
        while (format[i] != '%')
        {
            _putchar(format[i]);
            i++;
        }

        i++;

        handle_print(format[i + 1], va_list list);
    }

    va_end(list);
}

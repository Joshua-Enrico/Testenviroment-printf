#include "holberton.h"

int _printf(const char *format, ...)
{
    int i, printed_chars = 0;
    va_list list;

    va_start(list, format);

    for (i = 0; format && format[i] != '\0'; i++)
    {
        while (format[i] != '%')
            _putchar(format[i++]), printed_chars++;

        printed_chars += handle_print(format[++i], list);
    }

    va_end(list);

    return printed_chars;
}

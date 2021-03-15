#include "holberton.h"

int _printf(const char *format, ...)
{
    int i, printed_chars = 0;
    int flags;
    va_list list;

    va_start(list, format);

    for (i = 0; format && format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            write(1, &format[i], 1);
            printed_chars++;
        }
        else
        {
            flags = get_flags(format, &i);
            // width = get_with();
            // handle_precision();
            // handle_size();
            /* Last one handles type and print */
            printed_chars += handle_print(format[++i], list, flags);
        }
    }

    va_end(list);

    return printed_chars;
}

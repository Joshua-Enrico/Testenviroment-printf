#include "holberton.h"

/**
 * handle_print - Prints an argument based on its type
 */
int handle_print(char fmt, va_list list)
{
    int i, printed_chars = 0;
    fmt_t fmt_types[] = get_formats();

    for (i = 0; fmt_types[i].fmt != '\0'; i++)
        if (fmt == fmt_types[i].fmt)
            return fmt_types[i].fn(list);

    return 0;
}
#include "holberton.h"
/**
 * handle_print - Prints an argument based on its type
 * @fmt: Formatted string in which to print the arguments
 * @list: List of arguments to be printed
 */
int handle_print(char fmt, va_list list, int flags)
{
    int i, printed_chars = -1;
    char buffer[BUFF_SIZE];
    fmt_t fmt_types[] = {
        {'c', print_char},
        {'s', print_string},
        {'%', print_percent},
        {'i', print_int},
        {'d', print_int},
        {'b', print_binary},
        {'u', print_unsigned},
        {'o', print_octal},
        {'x', print_hexadecimal},
        {'X', print_hexa_upper},
        {'p', print_pointer},
        {'S', print_non_printable},
        {'r', print_reverse},
        {'R', print_rot13string},
        {'\0', NULL}
    };

    for (i = 0; fmt_types[i].fmt != '\0'; i++)
        if (fmt == fmt_types[i].fmt)
        {
            printed_chars = fmt_types[i].fn(list, buffer, flags);
            break;
        }

    if(printed_chars == 0)
        if (fmt == 's')
            return (1);

    /* UNKNOWN */
    if (fmt_types[i].fmt == '\0')
    {
        write(1, "%%", 1);
        write(1, &fmt, 1);
        return 2;
    }

    return printed_chars;
}
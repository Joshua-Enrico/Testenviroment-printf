#include "holberton.h"
/**
 * handle_print - Prints an argument based on its type
 * @fmt: Formatted string in which to print the arguments
 * @list: List of arguments to be printed
 */
int handle_print(char fmt, va_list list)
{
    int i, printed_chars = 0;
    fmt_t fmt_types[] = {
        {'c', print_char},
        {'s', print_string},
        {'%', print_percent},
        /*{'i', print_int},
        {'d', print_int},
        {'x', print_hexadecimal},
        {'X', print_hexa_upper},*/
        {'\0', 0}
    };

    // printf("\nreceived: %c\n", fmt);

    for (i = 0; fmt_types[i].fmt != '\0'; i++)
        if (fmt == fmt_types[i].fmt)
            return fmt_types[i].fn(list);

    return 0;
}
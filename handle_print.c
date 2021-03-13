#include "holberton.h"

int handle_print(char *format, va_list list)
{
    int bandera;
    fmt_t fmt_types = get_format_types();

    for (j = 0; fmt_types[j].op != NULL; j++)
    {
        if (format[i + 1] == fmt_types[j].op[0])
        {
            contador += fmt_types[j].f(list);
            bandera++;

            /* aun me falta ver varias cosas aqui, asi que solo me quedo en la parte que comparo */
        }
    }
}
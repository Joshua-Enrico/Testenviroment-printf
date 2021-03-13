#include "holberton.h"

int _printf(const char *format, ...)
{

    op_t ops[] = {
        {"c", op_c},
        {"s", op_s},
        {"i", op_d},
        {"d", op_d},
        {"%", op_mod},
        {NULL, NULL},

    };
    va_list list;
    int contador = 0;
    int i = 0, j = 0;

    va_start(list, format);

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            for (j = 0; ops[j].op != NULL; j++)
            {
                if (format[i] == ops[j].op[0])
                {
                    contador += ops[j].f(list);

                    /* aun me falta ver varias cosas aqui, asi que solo me quedo en la parte que comparo */
                }
            }
        }
    }
}

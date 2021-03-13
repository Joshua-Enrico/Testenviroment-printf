#include "holberton.h"
#include <stdio.h>


int _printf(const char *format, ...)
{
    int i, j;
    int count = 0;
    va_list list;
    op_t op_s[] = {
        {"c", op_c},
        {"s", op_ss},
        {"i", op_i},
        {"d", op_dd},
        {'%', op_z},
        {NULL, NULL},

    };

va_start(list, format);





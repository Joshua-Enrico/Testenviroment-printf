
#include "holberton.h"




int _printf(const char *format, ...)
{
    op_t op_s[] = {
        {"c", op_c},
        {"s", op_i},
        {"i", op_f},
        {"d", op_z},
        {"d", op_z},
        {NULL, NULL},

    };

    unsigned int i = 0, j = 0;
    char *x = "";
    va_list opp;
    va_start(opp, format);

    while (format != NULL && format[i] != '\0')
    {
        j = 0;
        while (op_s[j].op != NULL)
        {
            if (format[i] == op_s[j].op[0])
            {
                printf("%s", x);
                op_s[j].stargate(opp);
                x = ", ";
            }
            j++;
        }
        i++;
    }
    printf("\n");
    va_end(opp);
}




#include "../holberton.h"
#include <stdio.h>

/**
 * Command to run test:
 * gcc ./tests/0_test_strings.c _printf.c handle_print.c funciones.c utils.c 1_test_int.c
 */
int main(void)
{
    int len;
    int len2;

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    _printf("Negative:[%d]\n", 762534);
    printf("Negative:[%d]\n", 762534);

    _printf("Negative:[%d]\n", 5624);
    printf("Negative:[%d]\n", 5624);
}
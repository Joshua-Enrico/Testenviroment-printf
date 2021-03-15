#include "../holberton.h"
#include <stdio.h>

/**
 * Command to run test:
 * gcc ./_printf.c handle_print.c functions.c utils.c get_flags.c  tests/1_test_int.c
 */
int main(void)
{
    int len;
    int len2;
    len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    _printf("Negative:[%d]\n", 762534);
    printf("Negative:[%d]\n", 762534);

    _printf("Negative:[%d]\n", 5624);
    printf("Negative:[%d]\n", 5624);
}
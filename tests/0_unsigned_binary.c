#include "../holberton.h"
#include <stdio.h>
/**
 * Command to run test:
 * gcc ./_printf.c handle_print.c funciones.c utils.c  tests/0_unsigned_binary.c
 */
int main(void)
{
    unsigned int hola = 270;
    _printf("%b\n", 98);
    _printf("%b\n", 150);
    _printf("%b\n", hola);

    return (0);
}
#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * Command to run test:
 * gcc ./tests/4_unsigned.c _printf.c handle_print.c funciones.c utils.c 
 */
int main(void)
{
	unsigned int ui;
	ui = (unsigned int)INT_MAX + 1024;
	int len;

	len = printf("Unsigned:[%u]\n", ui);
	printf(" => %d\n", len);
	len = _printf("Unsigned:[%u]\n", ui);
	printf(" => %d\n", len);

	len = printf("Unsigned:[%u]\n", -12932);
	printf(" => %d\n", len);
	len = _printf("Unsigned:[%u]\n", -12932);
	printf(" => %d\n", len);

	len = printf("Unsigned:[%u]\n", 10000000);
	printf(" => %d\n", len);
	len = _printf("Unsigned:[%u]\n", 10000000);
	printf(" => %d\n", len);

	len = printf("Unsigned:[%u]\n", -999999999999000000000000000);
	printf(" => %d\n", len);
	len = _printf("Unsigned:[%u]\n", -999999999999000000000000000);
	printf(" => %d\n", len);
}
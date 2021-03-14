#include "../holberton.h"
#include <stdio.h>

/**
 * Command to run test:
 * gcc ./tests/0_printf_strings.c _printf.c handle_print.c funciones.c utils.c 
 */
int main(void)
{
	int len;

	len = printf("Hello", "");
	printf(" => %d\n", len);
	len = _printf("Hello", "");
	printf(" => %d\n", len);

	len = printf("Hello %s", "World!");
	printf(" => %d\n", len);
	len = _printf("Hello %s", "World!");
	printf(" => %d\n", len);

	len = printf("Hello %s ... %s", "...");
	printf(" => %d\n", len);
	len = _printf("Hello %s ... %s", "...");
	printf(" => %d\n", len);

	len = printf("Hello %s ... %p %r", "Holberton");
	printf(" => %d\n", len);
	len = _printf("Hello %s ... %p %r", "Holberton");
	printf(" => %d\n", len);

	len = printf("Hello %s School... %s", "%%%", NULL);
	printf(" => %d\n", len);
	len = _printf("Hello %s School... %s", "%%%", NULL);
	printf(" => %d\n", len);

	len = printf("Hello %c %c %c %c %c", 'H', 'l', 'b', 't', 'n');
	printf(" => %d\n", len);
	len = _printf("Hello %c %c %c %c %c", 'H', 'l', 'b', 't', 'n');
	printf(" => %d\n", len);

	len = printf("Hello %%");
	printf(" => %d\n", len);
	len = _printf("Hello %%");
	printf(" => %d\n", len);

	len = printf("Unknown:[%r]");
	printf(" => %d\n", len);
	len = _printf("Unknown:[%r]");
	printf(" => %d\n", len);
}
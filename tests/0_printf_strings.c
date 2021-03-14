#include <stdio.h>

/**
 * Command to run test:
 * gcc ./tests/0_printf_strings.c
 */
int main(void)
{
	int len;
	len = printf("Hello");
	printf(" => $d\n", len);
	len = printf("Hello %s\n", "World!");
	printf(" => $d\n", len);
	len = printf("Hello %s School...\n", "Holberton");
	printf(" => $d\n", len);
	len = printf("Hello %s School... %s\n", "$%%", "");
	printf(" => $d\n", len);
	len = printf("Hello %c %c %c %c %c\n", 'H', 'l', 'b', 't', 'n');
	printf(" => $d\n", len);
	len = printf("Hello %%\n");
	printf(" => $d\n", len);
}
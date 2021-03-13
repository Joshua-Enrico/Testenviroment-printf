#include <stdio.h>
#include <stdarg.h>

int main(void)
{
	/*
	int pint = printf("Hello\n");

	printf("%d\n", pint);
	*/

	write(1, "Hey\n", 5);

	return (0);
}

#include "holberton.h"

int len(char *str)
{
	int length = 0;
	
	while (*str++ != '\0')
		length++;

	return length;
}

int count_digits(unsigned int num)
{
	int digits = 0;

	if (num == 0)
		return (1);

	for (digits = 0; num > 0 ; digits++)
		num /= 10;

	return (digits);
}

unsigned int ten_to_power(int power)
{
	int i;
	unsigned int res = 1;

	for (i = 0; i < power; i++)
		res *= 10;

	return res;
}
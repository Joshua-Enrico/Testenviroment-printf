#include "holberton.h"

int len(char *str)
{
	int length = 0;
	
	while (*str++ != '\0')
		length++;

	return length;
}
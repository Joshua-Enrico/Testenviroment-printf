#include "holberton.h"

/**
 * len - Caluclates the lenght of a string
 * @str: String
 * 
 * Return: Length of str
 */
int len(char *str)
{
	int length = 0;
	
	while (*str++ != '\0')
		length++;

	return length;
}

/**
 * is_printable - Evaluates if a char is printable
 * @c: Char to be evaluated
 * 
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ascci in hexadecimal code to buffer
 * @buffer: Array of chars
 * @i: Index at which to start appending
 * 
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}
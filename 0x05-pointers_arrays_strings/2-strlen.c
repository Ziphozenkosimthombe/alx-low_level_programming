#include <stdio.h>

/**
 * _strlen - return the length of the string
 * @str: the string to get the length of
 *
 * Return: the length of @str.
 */

int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}

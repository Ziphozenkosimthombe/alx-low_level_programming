#include <stdio.h>

/**
 * _strlen - function that returns the lengh of a string
 * @s: input
 *
 * Return: always 0
 */

int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - create an array of char
 * @size: input number
 * @c: input char
 * Return: NULL if seze  = 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

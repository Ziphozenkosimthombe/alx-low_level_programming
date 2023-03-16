#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: is the size, in byte
 * @new_size: new size in bytes
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar;
	char *oldar = ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ar = malloc(new_size);
		return (ar);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ar = malloc(new_size);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		ar[i] = oldar[i];

	free(oldar);
	return (ar);
}

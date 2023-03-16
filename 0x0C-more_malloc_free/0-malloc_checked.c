#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocate memory using malloc
 * @b: input
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}

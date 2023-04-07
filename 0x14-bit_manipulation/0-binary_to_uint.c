#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string
 * Return: the converted number, or 0 if
 * there is one or more char in string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		val = 2 * val + (b[i] - 48);
	}
	return (val);
}

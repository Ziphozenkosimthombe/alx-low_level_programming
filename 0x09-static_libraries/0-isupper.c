#include "main.h"

/**
 * _isupper - print the uppercase
 * @c: input
 * Return: 1 if is uppercase and 0 if is not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}

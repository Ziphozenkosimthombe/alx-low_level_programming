#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the byte to search for
 * Return: a pointer to the byte in s that matches one
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}

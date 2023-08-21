#include "main.h"

/**
 * _strchr - function that locate in a string
 * @c: character to found
 * @s:  source string
 * Return: return string to character found
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
		for (b = 0; b <= a; b++)
		{
			if (c == s[b])
			{
				s += b;
			return (s);
			}
		}
	}
	return ('\0');
}

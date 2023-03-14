#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - cancatenate two strings
 * @s1: input
 * @s2: input
 * Return: a pointer shold point newly allocated
 */

char *str_concat(char *s1, char *s2)
{
	char *result;

	if (!s1)
	{
		s1 = " ";
	}
	if (!s2)
	{
		s2 = " ";
	}

	result = malloc(strlen(s1) + strlen(s2) + 1);
	if (!result)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}

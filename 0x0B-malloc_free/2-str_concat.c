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
	int i = 0;
	int j;

	if (!s1)
		s1 = " ";
	if (!s2)
		s2 = " ";

	result = malloc(strlen(s1) + strlen(s2) + 1);
	if (!result)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		result[i] = s2[j];
	}
	result[i] = '\0';
	return (result);
}

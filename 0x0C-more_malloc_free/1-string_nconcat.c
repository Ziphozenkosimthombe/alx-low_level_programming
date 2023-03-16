#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @s1: allocated space
 * @s2: byte input
 * @n: input
 * Return: pointer shall
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	n = len2;
	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
	return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	new_str[i] = s1[i];
	for (j = 0; j < n; j++)
	new_str[i + j] = s2[j];
	new_str[i + j] = '\0';
	return (new_str);
}

#include "main.h"

/**
 * _strcat - function that concetenates two strings
 * this function appends the
 * @src: input
 * @dest: input
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = j = 0;

	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocate space memory
 * @str: input string
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str =  malloc((strlen(str) + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}

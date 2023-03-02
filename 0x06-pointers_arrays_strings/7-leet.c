#include "main.h"

/**
 * leet - function that encode a string int 1337
 * @str: input
 * Return: str
 */

char *leet(char *str)
{
	char *leetspeak = "aAeEoOtTlL44337011";
		int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leetspeak[j])
			{
				str[i] = leetspeak[j + 10];
				break;
			}
		}
	}
	return (str);
}

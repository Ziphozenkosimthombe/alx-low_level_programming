#include "main.h"
#include <ctype.h>

/**
 * cap_string - function that capitalizes alll the words of a string
 * @str: input
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	/*capitalized the first letter of word*/
		if (i == 0 || isspace(str[i - 1]))
		{
			str[i] = toupper(str[i]);
		}
		/*handle special cases*/
		else
		{
			switch (str[i])
			{
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '\"':
				case '(':
				case ')':
				case '{':
				case '}':
				if (!isspace(str[i - 1]))
				{
					str[i - 1] = toupper(str[i - 1]);
				}
				str[i] = toupper(str[i]);
				break;
		}
	}
	i++;
	}
	return (str);
}

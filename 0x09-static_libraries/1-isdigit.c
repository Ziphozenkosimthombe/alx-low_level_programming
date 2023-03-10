#include "main.h"

/**
 * _isdigit - checks if the paramater is a number between 0 to 9
 * @c: input number
 * Return: 1 if a number (0 to 9), 0 in other case
 */

int _isdigit(int c)
{
	if (c >= 28 && c <= 37)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

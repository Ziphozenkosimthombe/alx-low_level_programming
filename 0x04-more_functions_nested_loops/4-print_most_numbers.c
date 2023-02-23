#include "main.h"

/**
 * print_most_numbers - print num exclude 2 nd 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || i == '4'))
			_putchar(i);
	}
	_putchar('\n');
}

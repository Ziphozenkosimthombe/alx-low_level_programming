#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: input
 * Return: always 0
 */

void print_number(int n)
{
	int i = 1;


	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (n / i >= 10)
	{
		i *= 10;
	}
	while (i > 0)
	{
		_putchar('0' + (n / i));
		n %= i;
		i /= 10;
	}
}

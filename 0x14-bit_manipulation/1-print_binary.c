#include "main.h"


/**
 * print_binary - prints the binary representation of number
 * @n: binary number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}

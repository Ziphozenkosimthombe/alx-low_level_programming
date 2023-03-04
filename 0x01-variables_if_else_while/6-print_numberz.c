#include <stdio.h>

/**
 * main - prints all the single digit numbers of base 10 starting from 0,
 * follow by a new line
 * Return: always 0;
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i  + '0');
	putchar('\n');
	return (0);
}

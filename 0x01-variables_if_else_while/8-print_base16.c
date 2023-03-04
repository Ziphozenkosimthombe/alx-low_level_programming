#include <stdio.h>

/**
 * main - print alll the numbers of base 16 in lowercase
 * follow by the new line
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9 ; i++)
		putchar(i + '0');
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - print all the alphabet in lowercase follow by the line
 * print all letters except q and e
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	if (i != 'q' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);
}

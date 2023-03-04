#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse,
 * followed by the new line
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

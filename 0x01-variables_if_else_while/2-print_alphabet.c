#include <stdio.h>

/**
 * main - print the alphabet in lowercase follow by the new line
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

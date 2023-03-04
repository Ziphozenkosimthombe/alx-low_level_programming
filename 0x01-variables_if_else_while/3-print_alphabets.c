#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase follow by the new line
 *
 * Return: alway 0
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

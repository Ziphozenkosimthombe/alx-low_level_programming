#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0,
 * follow by the new line
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}

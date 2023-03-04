#include <stdio.h>

/**
 * main - print all the possible combinations of single-digit numbers
 * numbers must be separated by the , followed by a space
 * numbers shoild be printed in ascending order
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a:input
 * @n: input
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}

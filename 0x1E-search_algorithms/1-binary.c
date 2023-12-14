#include "search_algos.h"

/**
 * binary_search - earches for a value in a sorted array of integers
 *					using the Binary search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: int value we are looking for
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m, i;

	l = 0;
	r = size - 1;
	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array:");
		for (i = l; i <= r; i++)
		{
			if (i == l)
				printf(" %d", array[i]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}

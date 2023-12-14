#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array
 *						of integers using the Exponential search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: int value we are looking for
 * Return: Always EXIT_SUCCESS
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t l, r, index;

	if (array == NULL)
		return (-1);
	l = 0;
	r = 1;
	if (array[l] == value)
		return (0);
	while (r != size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", r, array[r]);
		if (array[r] < value)
		{
			l = r;
			r = r * 2;
			if (r > size - 1)
				r = size - 1;
		}
		if (array[r] > value || r == size - 1)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", l, r);
			index = binary_search(array + l, r - l + 1, value);
			return ((index == (size_t)-1) ? (size_t)-1 : l + index);
		}
	}

	return (-1);
}
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

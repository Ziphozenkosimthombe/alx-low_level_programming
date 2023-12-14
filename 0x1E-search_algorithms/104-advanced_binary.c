#include "search_algos.h"

/**
 * advanced_binary_helper - searches for a value in a sorted array of integers
 * @array: array of ints
 * @l: left index
 * @r: right index
 * @value: int value we are looking for
 * Return: Always EXIT_SUCCESS
 */
int advanced_binary_helper(int *array, int l, int r, int value)
{
	int i, m;

	if (l > r || l < 0)
		return (-1);

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
	if (array[m] == value)
		if (array[m - 1] != value)
			return (m);
		else
			return (advanced_binary_helper(array, l--, m, value));
	else if (array[m] < value)
		return (advanced_binary_helper(array, m + 1, r, value));
	else
		return (advanced_binary_helper(array, l, m - 1, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: array of ints
 * @size: size of array
 * @value: int value we are looking for
 * Return: Always EXIT_SUCCESS
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_helper(array, 0, size - 1, value));
}

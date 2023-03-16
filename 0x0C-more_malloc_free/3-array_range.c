#include "main.h"
#include <stdlib.h>

/**
 * array_range -  creates an array of integers.
 * @min: input values
 * @max: input
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;
	return (arr);
}

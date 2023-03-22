#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute a fuction as a parameter
 * @array: to go through
 * @size: size of arrey
 * @action: action function to take
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	void (*p)(int);

	p = action;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		p(array[i]);
}

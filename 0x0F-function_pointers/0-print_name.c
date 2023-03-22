#include "function_pointers.h"

/**
 * print_name - function that print the name
 * @name: name of the person
 * @f: function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}

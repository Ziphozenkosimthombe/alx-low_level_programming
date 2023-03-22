#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that print the name
 * @name: name of the person
 * @f: function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

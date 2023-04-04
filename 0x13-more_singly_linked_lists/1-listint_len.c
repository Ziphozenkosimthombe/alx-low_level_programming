#include "lists.h"

/**
 * listint_len - returns the number of element in a linked listint_t list
 * @h: input
 * Return: element
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

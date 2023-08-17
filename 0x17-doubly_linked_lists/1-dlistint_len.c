#include "lists.h"

/**
 * dlistint_len - number of element will be return
 * in double linked list
 *
 * @h: list head
 * Return: nodes number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int calcu;

	calcu = 0;

	if (h == NULL)
		return (calcu);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		calcu++;
		h = h->next;
	}

	return (calcu);
}

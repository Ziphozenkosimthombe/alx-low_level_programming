#include "lists.h"

/**
 * print_dlistint - all the elements of a dlistint_t list
 * will be printed
 *
 * @h: list head
 * Return: nodes number
 */
size_t print_dlistint(const dlistint_t *h)
{
	int calcu;

	calcu = 0;

	if (h == NULL)
		return (calcu);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		calcu++;
		h = h->next;
	}

	return (calcu);
}

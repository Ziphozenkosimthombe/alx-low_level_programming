#include "lists.h"

/**
 * free_dlistint - set a dlistint_t list free
 *
 * @head: list head
 * Return: return nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *hmt;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((hmt = head) != NULL)
	{
		head = head->next;
		free(hmt);
	}
}


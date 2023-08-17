#include "lists.h"

/**
 * delete_dnodeint_at_index - The node at index of dlistint_t linked list
 * will be deleted
 *
 * @head: list header
 * @index: The new node index
 * Return: 1 or -1 if it fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *li;
	dlistint_t *wp;
	unsigned int k;

	li = *head;

	if (li != NULL)
		while (li->prev != NULL)
			li = li->prev;

	k = 0;

	while (li != NULL)
	{
		if (k == index)
		{
			if (k == 0)
			{
				*head = li->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				wp->next = li->next;

				if (li->next != NULL)
					li->next->prev = wp;
			}

			free(li);
			return (1);
		}
		wp = li;
		li = li->next;
		k++;
	}

	return (-1);
}

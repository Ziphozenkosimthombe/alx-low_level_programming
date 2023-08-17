#include "lists.h"

/**
 * insert_dnodeint_at_index - The new node will be
 * inserted at a given position
 *
 * @h: list head
 * @idx: The new node index
 * @n: The new node value
 * Return: new node address or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int k;

	new = NULL;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		k = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (k == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			k++;
		}
	}
	return (new);
}

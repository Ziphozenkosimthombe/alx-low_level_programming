#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index
 *  @head: head of the list
 *  @index: location of the node to delete
 *  Return: pointer to head of list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}

	current = *head;

	for (i = 0; current && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}

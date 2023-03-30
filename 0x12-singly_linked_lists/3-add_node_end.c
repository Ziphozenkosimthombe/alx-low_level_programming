#include "lists.h"


/**
 * add_node_end - adds a new node at the end of a list_t list
 *@head: pointer to the header
 *@str: string to be added
 *Return:address of the new element or NULL if it fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *put;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	put = strdup(str);
	if (put == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = put;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}

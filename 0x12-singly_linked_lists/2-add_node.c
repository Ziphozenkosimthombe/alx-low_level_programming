#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the header
 * @str: astring to be added
 * Return: the addrss of the new element, or NULL if it fail
 */

list_t *add_node(list_t **head, const char *str)
{
	char *put;
	int len;
	list_t *new;

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
	new->next = *head;

	*head = new;

	return (new);
}

#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t
 * @head: inputs
 * Return: the sum
 */



int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

#include "lists.h"

/**
 * sum_dlistint - The sum of all data (n) of doubly linked list
 * will be returned
 *
 * @head: The list head
 * Return: data sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}

	return (sum);
}

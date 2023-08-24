#include "lists.h"
/**
 * sum_dlistint - sumsall the data of list
 * @head: list
 * Return: the sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *curr = head;
	int sum = 0;

	if (!head)
		return (0);
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}

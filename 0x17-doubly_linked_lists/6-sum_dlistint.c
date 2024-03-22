#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}

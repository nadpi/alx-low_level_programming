#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head
 * @index: index of node
 * Return: return node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i, j;

	if (!head)
		return (NULL);

	while (curr != NULL)
	{
		curr = curr->next;
		j++;
	}

	curr = head;
	if (index >= j)
		return (NULL);

	for (i = 0; i < index && curr != NULL; i++)
		curr = curr->next;

	return (curr);
}

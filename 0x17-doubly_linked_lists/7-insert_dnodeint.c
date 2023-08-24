#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head
 * @idx: index
 * @n: value of node
 * Return: newnode pf NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *newnode = malloc(sizeof(dlistint_t));
	unsigned int i, j = 0;

	if (!newnode)
		return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		newnode = add_dnodeint(h, (const int) n);
		return (newnode);
	}
	while (curr != NULL)
	{
		curr = curr->next;
		j++;
	}

	curr = *h;
	if (idx > j)
	{
		newnode = add_dnodeint_end(h, (const int) n);
		return (newnode);
	}

	for (i = 0; i < idx - 1 && curr != NULL; i++)
		curr = curr->next;

	newnode->next = curr->next;
	curr->next = newnode;
	return (newnode);

}

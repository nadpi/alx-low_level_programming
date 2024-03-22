#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 * @h: head
 * @n: value
 * @idx: index
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cnt = 0, i = 1;
	dlistint_t *curr = *h, *cntnode = *h, *temp;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (!*h)
	{
		*h = newNode;
		return (newNode);
	}
	if (idx == 0)
	{
		newNode->next = *h;
		*h = newNode;
		return (newNode);
	}
	while (cntnode)
	{
		cnt++;
		cntnode = cntnode->next;
	}
	if (cnt < idx)
		return (NULL);
	while (i < idx)
	{
		curr = curr->next;
		i++;
	}
	temp = curr->next;
	curr->next = newNode;
	newNode->next = temp;
	newNode->prev = curr;
	if (temp)
		temp->prev = newNode;
	return (newNode);
}

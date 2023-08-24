#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t num = 0;

	if (!h)
		return (0);
	while (curr != NULL)
	{
		num++;
		curr = curr->next;
	}
	return (num);
}

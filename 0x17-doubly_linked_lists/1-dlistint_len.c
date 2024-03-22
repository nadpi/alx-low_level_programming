#include "lists.h"
/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: head
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t cnt = 0;

	while (current)
	{
		cnt++;
		current = current->next;
	}
	return (cnt);
}

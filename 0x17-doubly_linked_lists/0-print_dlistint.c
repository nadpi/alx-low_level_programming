#include "lists.h"
/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list.
 * @h: head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t cnt = 0;

	while (current)
	{
		printf("%d\n", current->n);
		cnt++;
		current = current->next;
	}
	return (cnt);
}

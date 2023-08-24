#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t num = 0;

	if (!h)
		return (0);
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		num++;
		curr = curr->next;
	}

	return (num);
}

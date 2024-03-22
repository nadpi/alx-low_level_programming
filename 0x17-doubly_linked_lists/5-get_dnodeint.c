#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: head
 * @indx: index
 * Return: node or Null if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; i < index; i++)
	{
		current = current->next;
	}
	return (current);
}

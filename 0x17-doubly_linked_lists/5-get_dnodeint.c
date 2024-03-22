#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: head
 * @index: index
 * Return: node or Null if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, cnt = 0;
	dlistint_t *current = head, cntnode = head;

	while (current)
	{
		cnt++;
		cntnode = cntnode->next;
	}
	if (index > cnt)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		current = current->next;
	}
	return (current);
}

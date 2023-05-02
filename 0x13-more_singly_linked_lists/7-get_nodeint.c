#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list.
 * @head: head pointer
 * @index: index of of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;

		if (!head)
			return (NULL);
	}
	return (head);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head pointer
 * @idx: index
 * @n: num
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp  = *head, *newnode = malloc(sizeof(listint_t)), *tmp;

	if (!newnode)
		return (NULL);
	newnode->n = n;

	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;

		if (!temp)
			return (NULL);
	}
	tmp = temp->next;
	temp->next = newnode;
	newnode->next = tmp;
	return (newnode);
}

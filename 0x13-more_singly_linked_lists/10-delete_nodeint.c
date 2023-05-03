#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a new node at a given position.
 * @head: head pointer
 * @idx: index
 * Return: address of new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i;
	listint_t *temp  = *head, *tmp;

	if (idx == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
	}
	tmp = temp->next;
	temp->next = tmp->next;
	free(tmp);
	return (1);
}

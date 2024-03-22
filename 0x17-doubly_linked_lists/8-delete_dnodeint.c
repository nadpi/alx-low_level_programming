#include "lists.h"
/**
 * delete_dnodeint_at_index -  a function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: head
 * @index: index
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int cnt = 0, i = 1;
	dlistint_t *curr = *head, *cntnode = *head, *temp;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (cntnode)
	{
		cnt++;
		cntnode = cntnode->next;
	}
	if (cnt < index)
		return (-1);
	while (i < index)
	{
		curr = curr->next;
		i++;
	}
	if (curr->next == NULL)
		return (-1);
	temp = curr->next;
	curr->next = curr->next->next;
	if (curr->next->next)
		curr->next->next->prev = curr->next;
	free(temp);
	return (1);
}

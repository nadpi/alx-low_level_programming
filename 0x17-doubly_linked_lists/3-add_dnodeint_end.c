#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head
 * @n: value of new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = newnode;
	newnode->next = NULL;
	newnode->prev = curr;
	return (newnode);
}

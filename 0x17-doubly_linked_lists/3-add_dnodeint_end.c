#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node
 * at the end of a dlistint_t list.
 * @head: head
 * @n: value
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	while (curr->next != NULL)
		curr = curr->next;

	curr->next = newNode;
	newNode->prev = curr;

	return (newNode);
}

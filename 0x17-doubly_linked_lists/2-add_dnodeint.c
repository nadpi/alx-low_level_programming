#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: head
 * @n: value
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

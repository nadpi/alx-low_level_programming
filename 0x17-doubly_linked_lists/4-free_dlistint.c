#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head)
	{
		h = head;
		head = head->next;
		free(h);
	}
}

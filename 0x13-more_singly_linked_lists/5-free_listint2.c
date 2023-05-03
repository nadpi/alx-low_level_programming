#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to head
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!*head)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(temp);
		*head = temp;
	}
	*head = NULL;
}

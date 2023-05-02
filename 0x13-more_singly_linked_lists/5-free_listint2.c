#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to head
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (head)
	{
		temp = temp->next;
		free(temp);
	}
	*head = NULL;
}

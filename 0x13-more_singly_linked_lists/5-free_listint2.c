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
	listint_t *temp = *head;
	listint_t *temp2;

	while (head)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	free(*head);
}

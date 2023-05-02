#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to head
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
		free(head);
	}
}

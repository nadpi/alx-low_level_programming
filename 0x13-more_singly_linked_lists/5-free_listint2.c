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
	listint_t *temp, *tmp = *head;

	while (tmp)
	{
		temp = tmp;
		tmp = tmp->next;
		free(temp);
	}
	free(tmp);
	tmp = NULL;
}

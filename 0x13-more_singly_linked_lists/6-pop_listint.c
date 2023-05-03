#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: head pointer
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int no;

	if (!head || !*head)
		return (0);
	no = (*head)->n;
	temp = (*head)->next;
	*head = temp;
	return (no);
}

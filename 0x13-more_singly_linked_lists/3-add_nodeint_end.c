#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end
 * @head: head pointer
 * @n: number to be put as data
 * Return: address of node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	return (newnode);
}

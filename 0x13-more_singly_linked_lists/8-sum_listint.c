#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sums the data in list
 * @head: head pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

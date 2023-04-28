#include "lists.h"
/**
* free_list - frres list
* @head: head of list
* Return: nothing
*/
void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
	h = head;
	head = head->next;
	free(h->str);
	free(h);
	}
}

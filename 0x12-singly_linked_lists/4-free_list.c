#include "lists.h"
/**
* free_list - frres list
* @head: head of list
* Return: nothing
*/
void free_list(list_t *head)
{
	while(head)
	{
	head = head->next;
	free(head->str);
	free(head);
	}
}

#include "lists.h"
/**
* free_list - frres list
* @head: head of list
* Return: nothing
*/
void free_list(list_t *head)
{
	if (head)
	{
	free(head->str);
	free(head->next);
	free(head);
	}
}

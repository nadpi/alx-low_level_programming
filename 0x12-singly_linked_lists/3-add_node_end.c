#include "lists.h"
/**
 * add_node_end - adds node at the head
 * @head: head of the list
 * @str: the string to be put
 * Return: the address of the node or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = *head;
	list_t *newnode = malloc(sizeof(list_t));
	unsigned int i = 0;

	if (!newnode || !str)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = NULL;
	if (h == NULL)
	{
		h = new;
		return (new);
	}
	while (h)
	{
	if (h->next != NULL)
		h = h->next;
	}
	h->next = newnode;
	return (newnode);
}

#include "lists.h"
/**
 * add_node - adds node at the head
 * @head: head of the list
 * @str: the string to be put
 * Return: the address of the node or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	unsigned int i = 0;
	while (str[i] != '\0')
		i++;

	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

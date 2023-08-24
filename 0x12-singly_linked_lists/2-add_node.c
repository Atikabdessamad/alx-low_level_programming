#include "lists.h"
/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: head of the linked list.
* @str: string
* Return: head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	size_t x = 0;

	n = malloc(sizeof(list_t));
	if (n == 0)
		return (0);

	n->str = strdup(str);

	while (str[x])
		x++;

	n->len = x;
	n->next = *head;
	*head = n;

	return (*head);
}

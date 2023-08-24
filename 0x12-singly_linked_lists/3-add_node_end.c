#include "lists.h"

/**
* add_node_end - adds new node at the end of list_t list
* @head: head of linked list
* @str: string
* Return: address of the head.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *tmp;
	size_t cha;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (cha = 0; str[cha]; cha++)
		;

	n->len = cha;
	n->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = n;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = n;
	}

	return (*head);
}

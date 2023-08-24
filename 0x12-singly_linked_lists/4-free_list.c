#include "lists.h"

/**
* free_list - free a list
* @head: head of linked list
* Return: void
*/

void free_list(list_t *head)
{
	list_t *x;

	while ((x = head) != NULL)
	{
		head = head->next;
		free(x->str);
		free(x);
	}
}

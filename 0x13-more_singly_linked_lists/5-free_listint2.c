#include "lists.h"
/**
* free_listint2 - free listint_t list.
* @head: ptr
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *hd;

	if (!head)
		return;
	while (*head != NULL)
	{
		hd = (*head)->next;
		free(*head);
		*head = hd;
	}
}

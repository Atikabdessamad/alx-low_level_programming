#include "lists.h"
/**
* free_listint - free listint_t list
* @head: ptr
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *hd;

	while (head)
	{
		hd = head->next;
		free(head);
		head = hd;
	}
}

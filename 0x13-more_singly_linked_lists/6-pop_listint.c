#include "lists.h"
/**
* pop_listint - Delete node at the beginning of listint_t
* @head: ptr
* Return: Int
*/
int pop_listint(listint_t **head)
{
	listint_t *hd;
	int x;

	if (!(*head))
		return (0);
	hd = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = hd;
	return (x);
}

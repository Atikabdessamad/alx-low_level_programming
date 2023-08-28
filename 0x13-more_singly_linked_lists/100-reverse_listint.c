#include "lists.h"

/**
* reverse_listint - Reverse listint linked list
* @head: ptr
* Return: Pointer
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur, *prv = NULL, *nx_nod;

	if (!head || !(*head) || !((*head)->next))
		return (*head);

	cur = *head;

	while (cur)
	{
		nx_nod = cur->next;
		cur->next = prv;
		prv = cur;
		cur = nx_nod;
	}

	*head = prv;

	return (*head);
}

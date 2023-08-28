#include "lists.h"
/**
* add_nodeint_end - Add a node at the end of listint_t
* @head: Singly linked list
* @n: int
* Return: int
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_nod = malloc(sizeof(listint_t));

	if (!nw_nod)
		return (0);

	nw_nod->n = n;
	nw_nod->next = 0;

	if (!(*head))
	{
		*head = nw_nod;
	}
	else
	{
		listint_t *cur = *head;

		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = nw_nod;
	}

	return (nw_nod);
}

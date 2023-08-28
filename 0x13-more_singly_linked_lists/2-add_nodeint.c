#include "lists.h"

/**
* add_nodeint - Add a node at the beginning of listint_t
* @head: Singly linked list
* @n: Int
* Return: int
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = (listint_t *)malloc(sizeof(listint_t));
	if (!x)
		return (0);
	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}

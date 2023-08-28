#include "lists.h"
/**
* print_listint - Print all elements of list
* @h: Singly linked list
* Return: int
*/
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}

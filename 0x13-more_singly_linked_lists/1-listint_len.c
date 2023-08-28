#include "lists.h"
/**
* listint_len - Print All the elements of list
* @h: Singly linked list
* Return: Int
*/

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

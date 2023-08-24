#include "lists.h"
/**
* list_len - returns number of elements in list
* @h: singly linked list.
* Return: size_t
*/

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h != 0)
	{
		h = h->next;
		x++;
	}
	return (x);
}

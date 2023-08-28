#include "lists.h"
/**
* get_nodeint_at_index - The nth node of listint
* @head: ptr
* @index: Int
* Return: 0
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *hd;

	if (!head)
		return (0);
	hd = head;
	while (hd)
	{
		if (x == index)
			return (hd);
		x++;
		hd = hd->next;
	}
	return (0);
}

#include "lists.h"
/**
* delete_nodeint_at_index - Delete node at given position of listint
* @head: ptr
* @index: Int
* Return: int
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tmp, *hd = *head;

	if (!hd)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(hd);
		return (1);
	}
	while (x < index - 1)
	{
		if (!(hd->next))
			return (-1);
		hd = hd->next;
		x++;
	}
	tmp = hd->next;
	hd->next = tmp->next;
	free(tmp);
	return (1);
}

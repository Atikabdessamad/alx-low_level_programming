#include "lists.h"
/**
* insert_nodeint_at_index - Insert new node at given position of listint
* @head: ptr
* @idx: Int
* @n: Int
* Return: ptr
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 1, y = 0;
	listint_t *aftr_hd, *bfr_hd, *hd;

	if (!head)
		return (0);
	if (idx == 0)
	{
		hd = (listint_t *)malloc(sizeof(listint_t));
		if (!hd)
			return (0);
		hd->n = n, hd->next = *head, *head = hd;
		return (hd);
	}
	aftr_hd = (*head)->next, bfr_hd = *head;
	while (bfr_hd)
		bfr_hd = bfr_hd->next, y++;
	bfr_hd = *head;
	if (idx > y)
		return (0);
	while (bfr_hd)
	{
		if (x == idx)
		{
			hd = (listint_t *)malloc(sizeof(listint_t));
			if (!hd)
				return (0);
			hd->next = aftr_hd, hd->n = n, bfr_hd->next = hd;
			return (hd);
		}
		x++, aftr_hd = aftr_hd->next, bfr_hd = bfr_hd->next;
	}
	return (0);
}

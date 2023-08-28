#include "lists.h"
/**
* sum_listint- Sum of the nth node of listint
* @head: ptr
* Return: num
*/
int sum_listint(listint_t *head)
{
	int num = 0;
	listint_t *hd;

	if (!head)
		return (0);
	hd = head;
	while (hd)
	{
		num += hd->n;
		hd = hd->next;
	}
	return (num);
}

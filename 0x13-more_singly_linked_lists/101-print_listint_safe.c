#include "lists.h"
/**
 * print_listint_safe - function that prints linked list with loop safely
 * @head: ptr
 * Return: nw_nod
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *len_n = NULL;
	const listint_t *x_n = NULL;
	size_t sum = 0;
	size_t nw_n;

	len_n = head;
	while (len_n)
	{
		printf("[%p] %d\n", (void *)len_n, len_n->n);
		sum++;
		len_n = len_n->next;
		x_n = head;
		nw_n = 0;
		while (sum > nw_n)
		{
			if (len_n == x_n)
			{
				printf("-> [%p] %d\n", (void *)len_n, len_n->n);
				return (sum);
			}
			x_n = x_n->next;
			nw_n++;
		}
		if (!head)
			exit(98);
	}
	return (sum);
}

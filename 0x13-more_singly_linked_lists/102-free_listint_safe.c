#include "lists.h"

/**
 * free_listint_safe - frees linked list
 * @h: ptr
 * Return: num
 */
size_t free_listint_safe(listint_t **h)
{
	size_t cen = 0;
	int def;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		def = *h - (*h)->next;
		if (def > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			cen++;
		}
		else
		{
			free(*h);
			*h = NULL;
			cen++;
			continue;
		}
	}

	*h = NULL;

	return (cen);
}

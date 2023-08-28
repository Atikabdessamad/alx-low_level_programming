#include "lists.h"

/**
* find_listint_loop - finds a loop in a linked list
* @head: linked list
* Return: NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x, *ed;

	if (head == NULL)
		return (NULL);
	for (ed = head->next; ed != NULL; ed = ed->next)
	{
		if (ed == ed->next)
			return (ed);
		for (x = head; x != ed; x = x->next)
			if (x == ed->next)
				return (ed->next);
	}

	return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @size: int
 * @nmemb: int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (0);
	for (x = 0; x < (size * nmemb); x++)
		*(ptr + x) = 0;
	return (ptr);
}

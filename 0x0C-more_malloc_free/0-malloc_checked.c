#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc.
 * @b: int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}

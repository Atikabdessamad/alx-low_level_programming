#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @new_size: int
 * @old_size: int
 * @ptr: pointer
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;

	if (old_size < new_size)
	{
		ptr1 = malloc(new_size);
		free(ptr);
		return (ptr1);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	if (ptr == 0)
	{
		ptr1 = malloc(new_size);
		free(ptr);
		return (ptr1);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	free(ptr);
	return (ptr);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,initializ a specific char
 * @c: char
 * @size: int
 * Return: if size is null = String or 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x = 0;

	ptr = malloc(size);
	if (size == 0 || !ptr)
		return (0);
	while (x < size)
	{
		ptr[x] = c;
		x++;
	}
	return (ptr);
}

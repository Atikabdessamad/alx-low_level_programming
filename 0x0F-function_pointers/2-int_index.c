#include <stdio.h>
/**
 * int_index - Searches for an integer
 * @array: int
 * @size: int
 * @cmp: Function ptr
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
	{
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	}
	return (-1);
}


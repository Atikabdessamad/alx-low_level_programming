#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * @array: int
 * @size: size array
 * @action: ptr to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *x = array + size - 1;

	if (array && size && action)
	{
		while (array <= x)
		{
			action(*array);
			array++;
		}
	}
}

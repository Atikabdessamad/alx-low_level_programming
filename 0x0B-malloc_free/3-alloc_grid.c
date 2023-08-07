#include <stdlib.h>
/**
 * alloc_grid - Return a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int x, y, **ptr;

	if (width <= 0 || height <= 0)
		return (0);
	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}
	for (x = 0; x < height; x++)
	{
		*(ptr + x) = (int *) malloc(sizeof(int) * width);
		if (*(ptr + x) == 0)
		{
			for (y = 0; y < x; y++)
			{
				free(*(ptr + y));
			}
			free(ptr);
			return (0);
		}
		for (y = 0; y < width; y++)
		{
			*(*(ptr + x) + y) = 0;
		}
	}
	return (ptr);
}

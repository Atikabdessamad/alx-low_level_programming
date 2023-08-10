#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: int
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x, y;

	if (max < min)
		return (0);
	p = malloc((max - min) * sizeof(int) + (sizeof(int) * 1));
	if (!ptr)
		return (0);
	y = min;
	for (x = 0; x <= (max - min); x++)
	{
		*(ptr + x) = y;
		y++;
	}
	return (ptr);
}

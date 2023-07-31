#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - two diagonals of a square matrix of integers
 * @a: int
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y = 0, z = 0;

	for (x = 0; x < size; x++)
	{
		y += a[x];
		a += size;
	}
	a -= size;
	for (x = 0; x < size; x++)
	{
		z += a[x];
		a -= size;
	}
	printf("%d, %d\n", y, z);
}

#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: value 1
 * @n: value 2
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == n - 1)
		{
			printf("%d", a[x]);
			continue;
		}
		printf("%d, ", a[x]);
	}
	printf("\n");
}

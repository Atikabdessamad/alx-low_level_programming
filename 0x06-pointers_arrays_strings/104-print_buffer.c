#include "main.h"
#include <stdio.h>
/**
 * print_buffer -  prints a buffer
 * @b: int
 * @size: int
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int x, y, z;

	x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		y = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (z = 0; z < 10; z++)
		{
			if (x + z < size)
				printf("%02x", *(b + x + z));
			else
				printf("  ");
			if (z % 2)
			{
				printf(" ");
			}
		}
		for (z = 0; z < y; z++)
		{

			int w = *(b + x + z);

			printf("%c", w >= 32 && w <= 132 ? w : '.');
		}

		printf("\n");
		x += 10;
	}
}

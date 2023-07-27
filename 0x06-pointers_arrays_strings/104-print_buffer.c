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

	if (size < 0)
	{
		printf("\n");
		return;
	}
	while (x < z)
	{
		if (x % 10 == 0)
		printf("%08x: ", x);
		for (z = 0; z < 10; z++)
		{
			if (x < y)
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

			if (w < 32 || w > 132)
			{
				w = '.';
			}
			printf("%c", w);
		}
		printf("\n");
		x += 10;
	}
}


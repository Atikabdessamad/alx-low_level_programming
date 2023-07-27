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
	int x, y, num = 0;
	int tab[] = {0, 0, 0, 0, 0, 0, 0, 0};

	if (size <= 0)
		printf("\n");
	for (x = 0; *(b + x); x++)
	{
		for (y = 0; y < 8; y++)
		{
			if (tab[y] == 0)
				printf("%x", tab[y]);
			else
			{
				num = num * 10 + tab[y];
			}
		}
		printf("%x", num);
		for (y = x; y < x + 10; y++)
		{
			if (y % 2 == 0)
				printf(" ");
			printf("%x", *(b + y));
		}
		for (y = x; y < x + 10; y++)
		{
			printf("%c", *(b + y));
		}
		printf("\n");
		x = x + 10;
	}
}

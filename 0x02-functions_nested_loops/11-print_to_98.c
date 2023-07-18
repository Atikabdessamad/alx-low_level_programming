#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: num
 * Return:
 */
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		printf("%d", n);
		for (x = n + 1; x <= 98; x++)
		{
			printf(", %d", x);
		}
	}
	else
	{
		printf("%d", n);
		for (x = n - 1; x >= 98; x--)
		{
			printf(", %d", x);
		}
	}
	printf("\n");
}

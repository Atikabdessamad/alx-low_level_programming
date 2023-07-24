#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @str: sring
 * Return: void
 */
void print_rev(char *str)
{
	int x, y;

	y = strlen(str) - 1;
	for (x = y; x >= 0; x--)
	{
		printf("%c", str[x]);
	}
	printf("\n");
}

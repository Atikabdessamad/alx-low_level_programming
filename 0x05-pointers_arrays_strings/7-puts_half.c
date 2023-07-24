#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int x, y;

	y = strlen(str);
	if (y % 2 == 0)
		for (x = y / 2; x < y; x++)
			printf("%c", str[x]);
	else
		for (x = y / 2 + 1; x < y; x++)
			printf("%c", str[x]);
	printf("\n");
}

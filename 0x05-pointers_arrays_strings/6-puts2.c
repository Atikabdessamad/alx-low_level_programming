#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string starting with the first character
 * @str: string
 * Return: Nothing
 */
void puts2(char *str)
{
	int x, y;

	y = strlen(str) - 1;
	for (x = 0; x <= y; x++)
		if (x % 2 == 0)
			printf("%c", str[x]);
	printf("\n");
}

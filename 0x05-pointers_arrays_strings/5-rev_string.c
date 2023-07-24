#include "main.h"
#include <string.h>
/**
 * rev_string - Reverse a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int x = 0, y;
	char z;

	y = strlen(s) - 1;
	while (y > x)
	{
		z = s[x];
		s[x] = s[y];
		s[y] = z;
		x++;
		y--;
	}
}

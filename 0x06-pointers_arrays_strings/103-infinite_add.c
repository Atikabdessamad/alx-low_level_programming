#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first num
 * @n2: second num
 *  @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x1 = 0, x2 = 0, y, y1, y2, y3, y4 = 0;

	while (*(n1 + x1) != '\0')
		x1++;
	while (*(n2 + x2) != '\0')
		x2++;
	if (x1 >= x2)
		y1 = x1;
	else
		y1 = x2;
	if (size_r <= y1 + 1)
		return (0);
	r[y1 + 1] = '\0';
	x1--, x2--, size_r--;
	y2 = *(n1 + x1) - 48, y3 = *(n2 + x2) - 48;
	while (y1 >= 0)
	{
		y = y2 + y3 + y4;
		if (y >= 10)
			y4 = y / 10;
		else
			y4 = 0;
		if (y > 0)
		*(r + y1) = (y % 10) + 48;
		else
			*(r + y1) = '0';
		if (x1 > 0)
			x1--, x1 = *(n1 + x1) - 48;
		else
			y2 = 0;
		if (x2 > 0)
			x2--, y3 = *(n2 + x2) - 48;
		else
			y3 = 0;
		y1--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

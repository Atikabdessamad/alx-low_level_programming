#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * wrdcnt - Prints an array of string
 * @s: str
 * retur: void
 */
int wrdcnt(char *s)
{
	int x, y = 0;

	for (x = 0; s[x]; x++)
	{
		if (x == 0)
			y++;
		else if (s[x] == ' ')
		{
			if (s[x + 1] != ' ' && s[x + 1] != '\0')
				y++;
		}
	}
	y++;
	return (y);
}
/**
 * strtow - splits a string into words
 * @str: str
 * Return: void
 */
char **strtow(char *str)
{
	int x, y, z, v, w = 0, vw = 0;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	w = wrdcnt(str);
	if (w == 1)
		return (NULL);
	ptr = (char **)malloc(w * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr[w - 1] = NULL;
	x = 0;
	while (str[x])
	{
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
		{
			for (y = 1; str[x + y] != ' ' && str[x + y]; y++)
				;
			y++;
			ptr[vw] = (char *)malloc(y * sizeof(char));
			y--;
			if (ptr[vw] == NULL)
			{
				for (z = 0; z < vw; z++)
					free(ptr[z]);
				free(ptr[w - 1]);
				free(ptr);
				return (NULL);
			}
			for (v = 0; v < y; v++)
				ptr[vw][v] = str[x + v];
			ptr[vw][v] = '\0';
			vw++;
			x += y;
		}
		else
			x++;
	}
	return (ptr);
}

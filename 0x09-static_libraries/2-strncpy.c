#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: str
 * @n: int
 * @src: str
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (*(src + x) != '\0')
		x++;
	for (y = 0; y < n; y++)
	{
		if (y < x)
			*(dest + y) = *(src + y);
		else
			*(dest + y) = '\0';
	}
	return (dest);
}

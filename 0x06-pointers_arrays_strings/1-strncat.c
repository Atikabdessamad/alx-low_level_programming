#include "main.h"
/**
 * _strncat - Concatenates two strings.
 * @src: str
 * @dest: str
 * @n: int
 *  Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (*(dest + x) != '\0')
		x++;
	for (y = 0; *(src + y) != '\0' && y < n; y++)
		*(dest + x + y) = *(src + y);
	return (dest);
}

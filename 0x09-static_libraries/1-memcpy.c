#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: int
 * @dest: str
 * @src: str
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}

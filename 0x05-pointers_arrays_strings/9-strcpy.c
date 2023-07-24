#include "main.h"
#include <string.h>
/**
 * *_strcpy -  copies the string pointed to by src.
 * @dest: value 1
 * @src: value 2
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}

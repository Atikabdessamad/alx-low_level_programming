#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: str
 * @src: str
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int num = 0, x = 0;

	while (*(dest + num) != '\0')
		num++;
	for (x = 0; *(src + x) != '\0'; x++)
		*(dest + num + x) = *(src + x);
	return (dest);
}

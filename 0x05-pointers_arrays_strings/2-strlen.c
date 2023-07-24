#include "main.h"
#include <string.h>

/**
 * _strlen -  returns the length of a string
 * @s: int
 * Return: return lenght of a string
 */
int _strlen(char *s);
{
	int x;

	for (x = 0; *s != '\0'; s++)
		++x;

	return (x);
}

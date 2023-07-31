#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: str
 * @accept: str
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (*(s + x))
	{
		for (y = 0; *(accept + y); y++)
			if (accept[y] == *(s + x))
				return (s + x);
		x++;
	}
	return ('\0');
}

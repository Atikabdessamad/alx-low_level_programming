#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: str
 * @accept: str
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, y, z;

	while (*(s + x) != '\0')
	{
		y = 0;
		for (z = 0; *(accept + z); z++)
		{
			if (accept[z] == *(s + x))
			{
				y = 1;
				continue;
			}
		}
		if (y == 0)
			break;
		x++;
	}
	return (x);
}

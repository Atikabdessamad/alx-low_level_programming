#include "main.h"
/**
 * _strcmp - Copie a string
 * @s1: str 1
 * @s2: str 2
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			x = ((int)*s1 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (x);
}

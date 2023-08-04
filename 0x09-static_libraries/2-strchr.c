#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: str
 * @c: str
 * Return: void
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (*(s + x))
	{
		if (*(s + x) == c)
			return (s + x);
		x++;
	}
	if (*(s + x) == c)
		return (s + x);
	return (0);
}

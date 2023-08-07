#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space in memory,copy of string
 * @str: str
 * Return: char
 */
char *_strdup(char *str)
{
	char *ptr;
	int x = 0, y = 0;

	if (!str)
		return (0);
	while (*(str + y))
		y++;
	ptr = malloc(y + 1);
	if (!ptr)
		return (0);
	while (x < y)
	{
		ptr[x] = *(str + x);
		x++;
	}
	return (ptr);
}

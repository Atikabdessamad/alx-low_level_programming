#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: str
 * @s2: str
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int x = 0, y = 0, z_s1 = 0, z_s2 = 0;

	if (s1 != 0)
	{
		while (*(s1 + z_s1))
			z_s1++;
	}
	if (s2 != 0)
	{
		while (*(s2 + z_s2))
			z_s2++;
	}
	ptr = malloc(z_s1 + z_s2 + 1);
	if (ptr == 0)
		return (0);
	while (y < z_s1)
	{
		ptr[y] = *(s1 + y);
		y++;
	}
	while (x < z_s2)
	{
		ptr[y] = *(s2 + x);
		y++;
		x++;
	}
	return (ptr);
}

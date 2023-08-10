#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: char
 * @s2: char
 * @n: int
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int v, w, x1 = 0, x2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (*(s1 + x1))
		x1++;
	while (*(s2 + x2))
		x2++;
	if (n > x2)
		n = x2;
	ptr = malloc(x1 + n + 1);
	if (!ptr)
		return (0);
	for (w = 0; w < x1; w++)
	{
		*(ptr + w) = s1[w];
	}
	for (v = 0; v < n; v++)
	{
		*(ptr + w) = s2[v];
		w++;
	}
	*(ptr + w) = '\0';
	return (ptr);
}

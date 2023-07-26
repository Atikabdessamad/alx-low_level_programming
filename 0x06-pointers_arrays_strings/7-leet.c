#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @a: string
 * Return: void
 */
char *leet(char *a)
{
	int x, y;
	char tab1[] = {97, 101, 108, 111, 116}, tab2[] = {52, 51, 49, 48, 55};

	for (x = 0; *(a + x); x++)
		for (y = 0; y < 5; y++)
			if (*(a + x) == tab1[y] || *(a + x) == tab1[y] - 32)
				*(a + x) = tab2[y];
	return (a);
}

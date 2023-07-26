#include "main.h"
/**
 * cap_string -  capitalizes all words of a string
 * @a: str
 * Return: void
 */
char *cap_string(char *a)
{
	int x = 0, y;
	char bb[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	char *b;

	b = bb;
	if (*(a + x) >= 97 && *(a + x) <= 122)
		*(a + x) = *(a + x) - 32;
	for (x = 0; *(a + x); x++)
		for (y = 0; *(b + y); y++)
			if (*(a + x) == *(b + y))
				if (*(a + x + 1) > 96 && *(a + x + 1) < 123)
					*(a + x + 1) = *(a + x + 1) - 32;
	return (a);
}

#include "main.h"
/**
 * string_toupper - reverses the content of an array of integers
 * @a: str
 * Return: void
 */
char *string_toupper(char *a)
{
	int x;

	for (x = 0; *(a + x); x++)
		if (*(a + x) > 96 && *(a + x) < 123)
			*(a + x) = *(a + x) - 32;
	return (a);
}

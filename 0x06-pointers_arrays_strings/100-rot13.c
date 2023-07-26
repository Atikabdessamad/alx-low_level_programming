#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @a: str
 * Return: void
 */
char *rot13(char *a)
{
	int x, y;
	char tab0[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char tab1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; *(a + x); x++)
	{
		for (y = 0; tab0[y] != 0; y++)
		{
			if (*(a + x) == tab0[y])
			{
				*(a + x) = tab1[y];
				break;
			}
		}
	}
	return (a);
}

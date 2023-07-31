#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: str
 * @needle: str
 * Return: void
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (*(haystack + x) == *(needle + x))
		{
			while (*(haystack + x) == *(needle + x))
			{
				if (*(needle + (x + 1)) == 0)
				{
					return (haystack);
				}
				x++;
			}
		}
		haystack++;
	}
	return (0);
}

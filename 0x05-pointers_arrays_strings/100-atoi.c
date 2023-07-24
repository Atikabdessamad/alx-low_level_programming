#include "main.h"
/**
 *_atoi - convert a string to an integer
 *@s: string
 *Return: void
 */
int _atoi(char *s)
{
	int x = 1;
	unsigned int count = 0;

	do {
		if (*s == '-')
			x *= -1;
		else if (*s >= '0' && *s <= '9')
			count = count * 10 + (*s - '0');
		else if (count > 0)
			break;
	} while (*s++);
	return (count * x);
}

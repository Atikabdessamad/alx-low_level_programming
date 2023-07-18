#include "main.h"
/**
 * _islower- checks for alphabetic character
 * @c: char
 * Return: Always 0 or 1.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


#include "main.h"
/**
 * check_palindrome - str if is palindrome
 * @start: int
 * @end: int
 * @s: str
 * Return: void
 */
int check_palindrome(int start, int end, char *s)
{
	if (start == end || start - 1 == end)
		return (1);
	if (*(s + start) == *(s + end))
		return (1 * check_palindrome(start + 1, end - 1, s));
	return (0);
}
/**
 * is_palindrome - Check str is palindrome.
 * @s: String
 * Return: Int
 */
int is_palindrome(char *s)
{
	int x = _strlen_recursion(s) - 1;
	int y = check_palindrome(0, x, s);

	if (y == 0)
		return (0);
	else
		return (1);
}

/**
 *_strlen_recursion - Return the length of  str
 *@s: str
 *Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}


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
	if (*(s + start) == *(s + end))
		return (1 * check_palindrome(start + 1, end - 1, s));
	if (start == end || start - 1 == end)
		return (1);
	return (0);
}
/**
 * is_palindrome - Check str is palindrome.
 * @s: String
 * Return: Int
 */
int is_palindrome(char *s)
{
	int y = _strlen_recursion(s) - 1;
	int x = check_palindrome(0, y, s);

	if (x == 0)
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

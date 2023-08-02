#include "main.h"

/**
 * sqrt2 - sqrt function
 * @x: int
 * @n: int
 * Return: void
 */
int sqrt2(int x, int n)
{
	if (x == n / 2)
		return (-1);
	else if (x * x == n)
		return (x);
	else
		return (sqrt2((x + 1), n));
}
/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: int
 * Return: void
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (sqrt2(0, n));
}

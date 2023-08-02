#include "main.h"

/**
 * prime2 - number test
 * @n: int
 * @x: int
 * Return: void
 */

int prime2(int n, int x)
{
	if (n < 0)
		return (0);
	else if ((x * x) > n)
		return (1);
	else if ((x * x) == n)
		return (0);

	return (prime2(n, x + 1));
}

/**
 * is_prime_number - Check if a number is prime
 * @n: int
 * Return: void
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if (n < 1)
		return (0);
	return (prime2(n, 2));
}

#include "main.h"

/**
 * prime2 - number test
 * @n: int
 * @x: int
 * Return: void
 */

int prime2(int n, int x)
{
	if (n % x == 0)
		return (0);
	else if (n == x)
		return (1);
	else
		return (prime2(n, x + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
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

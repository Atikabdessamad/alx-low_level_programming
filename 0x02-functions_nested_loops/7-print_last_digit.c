#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: int
 * Return: Always the last digit value
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}


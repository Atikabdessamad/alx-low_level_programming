#include "main.h"
/**
 * print_number -  prints an integer
 * @n: int
 * Return: void
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		x = -x;
		_putchar('-');
	}
	if (x > 9)
		print_number(x / 10);
	_putchar(x % 10 + '0');
}

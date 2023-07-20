#include "main.h"

/**
* print_number - prints an integer
* @n: int
*Return: always 0 (Success)
*/
void print_number(int n);
{
	unsigned int chi = n;

	if (n < 0)
	{
		_putchar('-');
		chi = -chi;
	}
	if (chi > 9)
	{
		print_number(chi / 10);
	}
		_putchar(chi % 10 + '0');
}


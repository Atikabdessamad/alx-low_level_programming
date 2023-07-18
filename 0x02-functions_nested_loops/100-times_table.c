#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
* return: Always 0
**/
void print_times_table(int n)
{
	int x, y;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			int value = x * y;

			if (value < 10)
			{
				_putchar(value + '0');
			}
			else
			{
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
			}

			if (y < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

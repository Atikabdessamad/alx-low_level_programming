#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
**/
void print_times_table(int n)
{
	int x, y, sum;

	if (n < 15 && n >= 0)
	{
	for (x = 0; x <= n; x++)
	{
		_putchar('0');
		for (y = 1; y <= n; y++)
		{
			_putchar(',');
			_putchar(' ');
			sum = x * y;
			if (sum >= 100)
			{
				_putchar(sum / 100 + '0');
				_putchar((sum % 100) / 10 + '0');
				_putchar(sum % 10 + '0');
			}
			else if (sum >= 10 && sum <= 99)
			{
				_putchar(' ');
				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
			}
			else if (sum <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(sum + 48);
			}
		}
		_putchar('\n');
	}
	}
}


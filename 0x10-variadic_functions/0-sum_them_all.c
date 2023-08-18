#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums all its parameters
*@n: num
*Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_x;
	unsigned int y = 0;
	int num = 0;

	if (n == 0)
		return (0);
	va_start(arg_x, n);
	while (y < n)
	{
		num += va_arg(arg_x, int);
		y++;
	}
	va_end(arg_x);
	return (num);
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums all its parameters
*@n: parameter
*
*Return: int
* or sum of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{
	int x = 0, y = n;
	va_list ptr;

	if (!n)
		return (0);
	va_start(ptr, n);
	while (y--)
		x += va_arg(ptr, int);
	va_end(ptr);
	return (x);
}

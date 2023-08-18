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
	unsigned int x;
	int num = 0;
	va_list y;

	va_start(y, n);

	for (x = 0; x < n; x++)
		num += va_arg(y, int);

	va_end(y);

	return (num);
}

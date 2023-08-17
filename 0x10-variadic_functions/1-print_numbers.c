#include "variadic_functions.h"

/**
*print_numbers - prints numbers
*@separator: str
*@n: num of int
*@...: int
*Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list x;
unsigned int y;

va_start(x, n);

for (y = 0; y < n; y++)
{


printf("%d", va_arg(x, int));

if (y != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(x);

}

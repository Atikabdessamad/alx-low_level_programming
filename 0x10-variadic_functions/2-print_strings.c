#include "variadic_functions.h"

/**
* print_strings - prints strings
*@separator: separator
*@n: num
*@...: str
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

va_list x;
unsigned int y;
char *ptr;

va_start(x, n);

for (y = 0; y < n; y++)
{
ptr = va_arg(x, char *);
if (ptr == NULL)
printf("(nil)");
else
printf("%s", ptr);

if (y != (n - 1) && separator != NULL)
printf("%s", separator);

}

printf("\n");
va_end(x);
}

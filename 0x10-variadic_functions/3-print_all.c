#include "variadic_functions.h"

/**
 * format_char - format a char.
 * @a: arg
 */
void format_char(va_list a)
{
	char x;

	x = va_arg(a, int);
	printf("%c", x);
}

/**
 * format_int - format an int.
 * @a: arg
 */
void format_int(va_list a)
{
	int y;

	y = va_arg(a, int);
	printf("%d", y);
}

/**
 * format_float - format a float.
 * @a: arg
 */
void format_float(va_list a)
{
	float y;

	y = va_arg(a, double);

	printf("%f", y);
}

/**
 * format_string - format a string.
 * @a: arg
 */
void format_string(va_list a)
{
	char *ptr;

	ptr = va_arg(a, char *);
	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptr);
}
/**
 * print_all - function that prints anything.
 * @format: arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list a;
	int x = 0, y = 0;
	char *separator = "";

	o ptr[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string}
	};

	va_start(a, format);

	while (format && (*(format + x)))
	{
		y = 0;
		while (y < 4 && (*(format + x) != *(ptr[y].c)))
			y++;
		if (y < 4)
		{
			printf("%s", separator);
			ptr[y].p(a);
			separator = ", ";
		}
		x++;
	}
	printf("\n");
	va_end(a);
}

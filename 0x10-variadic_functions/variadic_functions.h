#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
/**
 * struct printer - structure for printer
 * @print: func ptr
 * @symbol: str
 * Description: nothink
 */
typedef struct o
{
char *c;
void (*p)(va_list a);
} o;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void format_char(va_list a);
void format_int(va_list a);
void format_float(va_list a);
void format_string(va_list a);
void print_all(const char * const format, ...);

#endif

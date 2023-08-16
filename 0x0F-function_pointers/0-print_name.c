#include "function_pointers.h"
/**
 * print_name - Print a name
 * @name: str
 * @f: Function ptr
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int alphbt;

	for (alphbt = 'a'; alphbt <= 'z'; alphbt++)
	{
		_putchar(alphbt);
	}
	_putchar('\n');
}

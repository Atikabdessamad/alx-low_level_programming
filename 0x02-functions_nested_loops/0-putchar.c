#include "main.h"

/**
 * main - check the code
 * descrp : Write a program that prints _putchar
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "_putchar";
	int n;

	for (n = 0; n <= 5; n++)
		_putchar(str[n]);
	_putchar('\n');

	return (0);
}

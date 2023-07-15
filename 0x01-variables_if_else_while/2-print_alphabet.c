#include <stdio.h>
/**
 * main - Entry point
 *discrp: 'the alphabet in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}


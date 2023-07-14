#include <stdio.h>
/**
 * main - Entry point
 *Discrp: 'prints all possible combinations of single-digit numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{

	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}


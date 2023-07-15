#include <stdio.h>
/**
 * main - Entry point
 *Discrp: 'prints the alphabet in lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}


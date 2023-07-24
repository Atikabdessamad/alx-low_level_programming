#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - generates random valid passwords for the program
 *Return: void
 */
int main(void)
{
	int a;
	char b;

	srand(time(0));

	while (a <= 2645)
	{
		b = rand() % 128;
		a += b;
		putchar(b);
	}
	putchar(2772 - a);
	return (0);
}

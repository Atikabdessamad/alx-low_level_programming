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

	while (b <= 2645)
	{
		a = rand() % 128;
		b += a;
		putchar(a);
	}
	putchar(2772 - b);
	return (0);
}

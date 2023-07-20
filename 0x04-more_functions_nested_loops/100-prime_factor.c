#include "main.h"
#include <stdio.h>
/**
 *main - The prime factors of 1231952
 *Return: Always 0.
 */
int main(void)
{
	long int prime = 612852475143;
	long int x = 2;

	while (prime > 1)
	{
		if (prime % x == 0)
		{
			prime /= x;
		}
		else
			x++;
	}

	printf("%ld\n", x);
	return (0);
}

#include <stdio.h>
/**
 *main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *Return: Always 0.
 */
int main(void)
{
	int x;
	unsigned long int1 = 0, int2 = 1, num;

	for (x = 0; x < 50; x++)
	{
		num = int1 + int2;
		printf("%lu", num);

		int1 = int2;
		int2 = num;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}


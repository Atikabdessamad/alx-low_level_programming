#include <stdio.h>
/**
 *main - finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 *Return: Always 0.
 */
int main(void)
{
	int z;
	unsigned long x1 = 0, x2 = 1, x3;
	unsigned long x1_y1, x1_y2, x2_y1, x2_y2;
	unsigned long y1, y2;

	for (z = 0; z < 92; z++)
	{
		x3 = x1 + x2;
		printf("%lu, ", x3);
		x1 = x2;
		x2 = x3;
	}
	x1_y1 = x1 / 10000000000;
	x2_y1 = x2 / 10000000000;
	x1_y2 = x1 % 10000000000;
	x2_y2 = x2 % 10000000000;
	for (z = 93; z < 99; z++)
	{
		y1 = x1_y1 + x2_y1;
		y2 = x1_y2 + x2_y2;
		if ((x1_y2 + x2_y2) > 9999999999)
		{
			y1 += 1;
			y2 %= 10000000000;
		}
		printf("%lu%lu", y1, y2);
		if (z != 98)
			printf(", ");

		x1_y1 = x2_y1;
		x1_y2 = x2_y2;
		x2_y1 = y1;
		x2_y2 = y2;
	}
	printf("\n");
	return (0);
}


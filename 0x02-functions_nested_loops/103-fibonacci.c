#include <stdio.h>

/**
 * main -  finds and prints the sum of the even-valued terms
 * Return: Always 0.
 */
int main(void)
{
	int x;
	unsigned long int y, z, num, count;

	y = 1;
	z = 2;
	count = 0;

	for (x = 1; x <= 33; ++x)
	{
		if (y < 4000000 && (y % 2) == 0)
		{
			count = count + y;
		}
		num = y + z;
		y = z;
		z = num;
	}

	printf("%lu\n", count);

	return (0);
}


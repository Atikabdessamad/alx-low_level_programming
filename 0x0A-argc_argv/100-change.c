#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coins
 * @argv: str
 * @argc: int
 * Return: void
 */
int main(int argc, char *argv[])
{
	int x, y, z = 0;
	int num[5] = {25, 10, 5, 2, 1};

	if  (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else if (argc != 2)
	{
		printf("Error\n");
	}
	else if (atoi(argv[1]) >= 0)
	{
		y = atoi(argv[1]);
		while (y != 0)
		{
			for (x = 0; x < 5; x++)
			{
				if (y >= num[x])
				{
					y -= num[x];
					z++;
					break;
				}
			}
		}
		printf("%d\n", z);
	}
	return (0);
}

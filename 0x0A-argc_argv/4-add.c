#include <stdio.h>
#include <stdlib.h>
/**
 * main - Add positive number
 * @argv: str
 * @argc: int
 * Return: int
 */
int main(int argc, char *argv[])
{
	int z = 0, x, y;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!(argv[x][y] >= '0' && argv[x][y] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		z += atoi(argv[x]);
	}
	printf("%d\n", z);
	return (0);
}

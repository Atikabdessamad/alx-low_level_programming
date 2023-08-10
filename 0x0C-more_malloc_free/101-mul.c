#include <stdio.h>
#include <stdlib.h>
/**
 * length_of_argv - number length of argv
 * @tab: str
 * Return: void
 */
int length_of_argv(*tab)
{
	int x = 0;

	while (*(tab + x))
		x++;
	return (x);
}
/**
 * main - multiplies two positive numbers
 * @argc: int
 * @argv: str
 * Return: void
 */
int main(int argc, char *argv[])
{
	int x, y;
	int x1, x2, y_len;
	int *ptr;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < 48 || argv[x][y] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	ptr = (int *)malloc(sizeof(int) * x_len);
	X1 = length_of_argv(argv[1]);
	X2 = length_of_argv(argv[2]);
	x_len = x2 + x1;
	x = 0
	while (x < x_len)
	{
		*(ptr + x) = 0;
		x++
	}
	return (0);
}

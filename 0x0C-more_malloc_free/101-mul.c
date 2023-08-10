#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * length_of_argv - number length of argv
 * @tab: str
 * Return: void
 */
int length_of_argv(char *tab)
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
	int x1, x2, xy_len;
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
	x1 = strlen(argv[1]);
	x2 = strlen(argv[2]);
	xy_len = x2 + x1;
	ptr = (int *)malloc(sizeof(int) * xy_len);
	for (x = 0; x < xy_len; x++)
	{
		*(ptr + x) = 0;
	}
	return (0);
}

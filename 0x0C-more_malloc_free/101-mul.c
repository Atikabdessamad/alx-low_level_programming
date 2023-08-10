#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* is_valid_num - Check if a string contains only digits
* @tab: str
* Return: void
*/
int is_valid_num(char *tab)
{
	int x = 0;

	while (tab[x])
	{
		if (tab[x] < '0' || tab[x] > '9')
			return (0);
		x++;
	}

	return (1);
}

/**
* main - multiplies two positive numbers
* @argc: int
* @argv: str
* Return: void
*/
int main(int argc, char **argv)
{
	unsigned long x1, x2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_valid_num(argv[1]) || !is_valid_num(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	x1 = strlen(argv[1]);
	x2 = strlen(argv[2]);
	res = x1 * x2;

	printf("%lu\n", res);

	return (0);

}

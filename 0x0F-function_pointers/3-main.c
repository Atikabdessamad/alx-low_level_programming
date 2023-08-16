#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function only
 * @argc: int
 * @argv: int
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, y;
	char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr = argv[2];
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	if (get_op_func(ptr) == NULL || ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((y == 0) && (*ptr == '/' || *ptr == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(ptr)(x, y));
	return (0);
}

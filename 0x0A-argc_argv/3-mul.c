#include <stdio.h>
#include <stdlib.h>
/**
 *main -  multiplies two numbers
 *@argv: str
 *@argc: int
 *Return: int
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}

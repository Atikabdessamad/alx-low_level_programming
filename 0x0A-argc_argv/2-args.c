#include <stdio.h>
/**
 * main - Print all argument
 * @argv: str
 * @argc: int
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}

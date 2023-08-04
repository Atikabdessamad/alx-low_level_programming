#include <stdio.h>
/**
 *main - Print number of arguments passed into it
 *@argc: int
 *@argv: str
 *Return: int
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", --argc);
	return (0);
}

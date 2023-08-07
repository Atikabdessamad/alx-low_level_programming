#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int
 * @av: str
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int x, y, z, v = 0, w = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			v++;
		v++;
	}

	ptr = malloc(sizeof(char) * (v + 1));
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (z = 0; av[x][z] != '\0'; z++)
		{
			ptr[w] = av[x][z];
			w++;
		}
		ptr[w] = '\n';
		w++;
	}
	ptr[w] = '\0';

	return (ptr);
}

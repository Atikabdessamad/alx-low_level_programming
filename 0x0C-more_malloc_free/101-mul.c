#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit1 - checks if string contains non-digit char.
 * @str: str
 * Return: void
 */
int is_digit1(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] < '0' || str[x] > '9')
			return (0);
		x++;
	}
	return (1);
}
/**
 * is_valid_number - returns length of string.
 * @str: str
 * Return: void
 */
int is_valid_number(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * _strlen1 - handles errors for main
 */
void _strlen1(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: int
 * @argv: dtr
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int l1, l2, l, x, y, x1, x2, *res, z = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit1(str1) || !is_digit1(str2))
		_strlen1();
	l1 = is_valid_number(str1);
	l2 = is_valid_number(str2);
	l = l1 + l2 + 1;
	res = malloc(sizeof(int) * l);
	if (!res)
		return (1);
	for (x = 0; x <= l1 + l2; x++)
		res[x] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		x1 = str1[l1] - '0';
		y = 0;
		for (l2 = is_valid_number(str2) - 1; l2 >= 0; l2--)
		{
			x2 = str2[l2] - '0';
			y += res[l1 + l2 + 1] + (x1 * x2);
			res[l1 + l2 + 1] = y % 10;
			y /= 10;
		}
		if (y > 0)
			res[l1 + l2 + 1] += y;
	}
	for (x = 0; x < l - 1; x++)
	{
		if (res[x])
			z = 1;
		if (z)
			_putchar(res[x] + '0');
	}
	if (!z)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}

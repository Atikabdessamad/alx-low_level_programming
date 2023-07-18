#include "main.h"
/**
* times_table - Print the 9 times table
*/
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = y * x;
			if (y == 0)
			{
				_putchar(z + '0');


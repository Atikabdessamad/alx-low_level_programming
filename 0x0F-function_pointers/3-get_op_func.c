#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - correct function to perform operation asked by the use
 * @s: int
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x = 0;

	while (ops[x].op)
	{
		if (*(ops[x].op) == *s)
			return (ops[x].f);
		x++;
	}
	return (NULL);
}

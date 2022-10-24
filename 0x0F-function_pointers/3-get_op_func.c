#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - function
 * @s: string
 * Return: integer
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t op[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}};
	while (i < 5)
	{
		if(op[i].op == s)
		{
			return (op[i].f);
		}
	i++;
	}
	return (NULL);
}

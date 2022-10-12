#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - check code
 * @name: string pointer
 * @f: pointer to function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

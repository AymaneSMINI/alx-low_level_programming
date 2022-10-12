#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - function
 * @array: integer pointer
 * @size: int argument
 * @cmp: pointer to the function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (0);
}

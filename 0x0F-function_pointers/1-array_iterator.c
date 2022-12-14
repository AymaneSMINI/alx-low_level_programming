#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - function
 * @array: integer pointer
 * @size: size_t argument
 * @action: pointer to function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i  < size; i++)
		action(array[i]);
}

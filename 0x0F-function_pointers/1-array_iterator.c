#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator
 * @array: integer pointer
 * @size: size_t argument
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i  < size; i++)
		action(array[i]);
}

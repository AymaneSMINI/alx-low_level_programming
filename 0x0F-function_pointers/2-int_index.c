#include "function_pointers.h"
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
	int counter;

	if (array == NULL || size < 0)
		return (-1);
	counter = 0;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			counter++;
	}
	return (counter);

#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - function
 * @array: int pointer
 * @value: int argument
 * @size: size argument
 * Return: index where value located (Success) -1 (failed)
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0, P = (int) size;
	int m = 0;
	int i = 0;

	while (L < P)
	{
		printf("Searching in array:");
		for (i = L; i < P; i++)
		{
			if (i == P - 1)
				printf(" %d\n", array[i]);
			else
				printf(" %d,", array[i]);
		}
		m = (int) ((L + P) / 2);
		if (array[m] == value)
		{
			return (m);
		}
		else if (array[m] < value)
		{
			L = m + 1;
		}
		else
		{
			P = m - 1;
		}
	}
	return (-1);
}

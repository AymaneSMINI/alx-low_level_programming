#include "main.h"
#include <string.h>
/**
 * reverse_array - function
 * @a: int pointer
 * @n: int argument
 * Return: int value
 */
void reverse_array(int *a, int n)
{
	int perm;
	int i;
	int j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		perm = a[i];
		a[i] = a[j];
		a[j] = perm;
		i++;
		j--;
	}
}

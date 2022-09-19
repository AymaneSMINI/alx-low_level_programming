#include "main.h"
/**
 * swap_int - swap function
 * @a: int pointer
 * @b: int pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

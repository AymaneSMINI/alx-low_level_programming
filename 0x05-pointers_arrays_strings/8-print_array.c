#include "main.h"
#include <string.h>
/**
 * print_array -  function
 * @a: int pointer
 * @n: int argument
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		if (i != (n - 1)) 
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}

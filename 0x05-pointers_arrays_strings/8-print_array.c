#include "main.h"
#include <string.h>
/**
 * print_long - long digit
 * @digit : int value
 * Return : nothing
 */
void print_long(int digit)
{
	if (digit != 0)
	{
		print_long(digit / 10);
		_putchar('0' + digit % 10);
	}
/**
 * print_array -  function
 * @a: int pointer
 * @n: int argument
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	while (i < n)
	{
		print_long(a[i]);
		if (i != (n - 1)) 
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}

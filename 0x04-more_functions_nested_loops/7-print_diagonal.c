#include "main.h"
/**
 * print_diagonal - function
 * @n : int argument
 * Return: print diagonal
 */
void print_diagonal(int n)
{
	int i;
	int j;
	
	if (i <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

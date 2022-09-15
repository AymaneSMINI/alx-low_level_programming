#include "main.h"
/**
 * print_long - long digit.
 * @digit : int argument
 * Return: value.
 */
void print_long(int digit)
{
	if (digit != 0)
	{
		print_long(digit / 10);
		_putchar('0' + digit % 10);
	}
}
/**
 * times_table - table function.
 * @n: int argument
 * Return: nothing.
 */
void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j != 0 && i * j < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (i * j >= 10 && i * j < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (i * j >= 100)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (i * j == 0)
					_putchar('0');
				else
					print_long(i * j);
			}
			_putchar('\n');	
		}
	}
}

#include "main.h"
/**
 * print_long - long digit. 
 * times_table - table.
 * @digit : int argument
 * Return: nothing.
 */

/**
 * times_table - table.
 */
void print_long(int digit)
{
	if (digit != 0)
	{
		print_long(digit / 10);
		_putchar('0' + digit % 10);
	}
}
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 0 && i * j < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (i * j >= 10)
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

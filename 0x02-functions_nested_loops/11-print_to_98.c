#include "main.h"
/**
 * print_long - long number
 * @n: int argument
 * Return: nothing
 */
void print_long(int n)
{
	while (n != 0)
	{
		_putchar(48 + (n % 10));
		n = n / 10;
	}
}
/**
 * print_to_98(int n)
 * @n : int argument
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (n < 0)
				_putchar('-');
			print_long(i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
			print_long(i);
	}
}

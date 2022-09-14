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
 * add - sum.
 * Return: 0.
 */
void add(int a, int b)

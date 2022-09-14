#include "main.h"
/**
 * print_last_digit - return last digit.
 * @n :int argument
 * last digit
 * Return: n last digit.
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar('0' - n % 10);
		return (-1 * (n % 10));
	}
	_putchar('0' + n % 10);
	return (n % 10);
}

#include "main.h"
#include <ctype.h>

/**
 * main - check the code.
 * @n : int argument
 * Return: 1 if posiyive 0 if negative.
 */
int print_sign(int n)
{
	if (n > 0) 
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

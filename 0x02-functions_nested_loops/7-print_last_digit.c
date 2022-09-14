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
		putchar('-');
		return -n % 10;
	}
	return n % 10;
}

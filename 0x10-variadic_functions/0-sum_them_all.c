#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - function
 * @n: unsigned int
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(ptr, unsigned int);
	va_end(ptr);
	return (sum);
}

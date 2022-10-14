#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function
 * @separator: char pointer
 * @n: int argument
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *value;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(ptr, char *);
		if (value == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", value);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}

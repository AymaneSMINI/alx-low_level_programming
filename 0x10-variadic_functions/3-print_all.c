#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function
 * @format: char const
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ptr;
	char *p;
	int length;

	length = strlen(format);
	va_start(ptr, format);
	while (format[i] != '\0')
	{
		switch(format[i])
		{
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'c':
				printf("%c", (char) va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				p = va_arg(ptr, char *);
				if (p == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", p);
				break;
			default:
				break;
		}
		if (i != (length - 1))
			printf(", ");
	i++;
	}
	va_end(ptr);
	printf("\n");
}

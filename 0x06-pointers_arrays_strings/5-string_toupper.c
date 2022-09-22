#include "main.h"
#include <string.h>
/**
 * string_toupper - function
 * @a: char pointer
 * Return: char value
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] < 123 && a[i] > 97)
		{
			a[i] = a[i] - 32;
			i++;
		}
	}
}

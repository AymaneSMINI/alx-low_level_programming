#include "main.h"
#include <string.h>
/**
 * string_toupper - function
 * @str: char pointer
 * Return: char value
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 123 && str[i] > 96)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

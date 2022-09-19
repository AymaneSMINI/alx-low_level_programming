#include "main.h"
#include <string.h>
/**
 * _puts -  function
 * @str: char pointer
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

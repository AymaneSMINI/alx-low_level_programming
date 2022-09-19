#include "main.h"
#include <string.h>
/**
 * puts2 -  function
 * @str: char pointer
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

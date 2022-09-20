#include "main.h"
#include <string.h>
/**
 * puts_half -  function
 * @str: char pointer
 * Return: nothing
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = strlen(str);
	if (len % 2 == 0)
		i = len / 2;
	else
		i = ((len - 1) / 2) + 1;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

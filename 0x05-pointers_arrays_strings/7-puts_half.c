#include "main.h"
#include <string.h>
/**
 * puts_half -  function
 * @str: char pointer
 * Return: nothing
 */
void puts_half(char *str)
{
	int start;
	int len;

	len = strlen(str);
	if (len % 2 == 0)
		start = len - ((len - 1) / 2);
	else
		start = len - (len / 2)
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}

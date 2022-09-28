#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - function
 * @s: char pointer
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int len;

	len = strlen(s) - 1;
	if (len < 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + len));
	len--;
	_print_rev_recursion(s);
}

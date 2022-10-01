#include "main.h"
/**
 * _strlen_recursion - function
 * @s: char pointer
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
return (0);
}

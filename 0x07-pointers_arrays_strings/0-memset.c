#include "main.h"
/**
 * _memset - function
 * @s: char pointer
 * @b: char argument
 * @n: int argument
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}

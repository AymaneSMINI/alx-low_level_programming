#include "main.h"
#include <string.h>
/**
 * _memset - function
 * @s: char pointer
 * @b: char argument
 * @n: int argument
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n * sizeof(char));
	return (s);
}

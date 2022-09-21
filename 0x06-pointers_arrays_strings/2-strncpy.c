#include "main.h"
#include <string.h>
/**
 * _strncpy - function
 * @dest: char pointer
 * @src: char pointer
 * @n: int argument
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

#include "main.h"
#include <string.h>
/**
 * _strncat - function
 * @dest: char pointer
 * @src: char pointer
 * @n: int argumment
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

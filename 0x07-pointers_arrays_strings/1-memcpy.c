#include "main.h"
#include <string.h>
/**
 * _memcpy - function
 * @dest: char pointer
 * @src: char argument
 * @n: int argument
 * Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n * sizeof(char));
	return (dest);
}

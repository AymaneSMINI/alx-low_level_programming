#include "main.h"
#include <string.h>
/**
 * _stnrcpy - function
 * @dest: char pointer
 * @src: char pointer
 * @n: int argumment
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

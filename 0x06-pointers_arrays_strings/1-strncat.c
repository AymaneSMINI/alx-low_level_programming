#include "main.h"
#include <string.h>
/**
 * _stnrcat - function
 * @dest: char pointer
 * @src: char pointer
 * @n: int argumment
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src, n);
	return (dest);
}

#include "main.h"
#include <string.h>
/**
 * _strspn - function
 * @s: char pointer
 * @accept: char pointer
 * Return: int value
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

#include "main.h"
#include <string.h>
/**
 * _strpbrk - function
 * @s: char pointer
 * @accept: char pointer
 * Return: int value
 */
char *_strpbrk(char *s, char *accept)
{
	int j;
	char *new;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return ((char *) s);
			}
			j++;
		}
		s++;
	}
	return (new);
}

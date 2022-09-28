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
	int i;
	char *new;

	i = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				_strchr(new,accept[j]);
		       return (new);
		}
	}
}

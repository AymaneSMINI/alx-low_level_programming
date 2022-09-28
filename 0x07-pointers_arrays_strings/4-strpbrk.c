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
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return ((char *) s+i);
			}
			j++;
		}
		i++;
	}
	return (new);
}

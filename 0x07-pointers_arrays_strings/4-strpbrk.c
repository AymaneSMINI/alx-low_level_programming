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
	int k;
	char *new;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				while (s[i] != '\0')
				{
					new[k] = s[i];
					k++;
					i++;
				}
				return (new);
			}
			j++;
		}
		i++;
	}
	return (new);
}

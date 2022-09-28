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
	int i, j, k;
	char *new;

	i = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				while (s[i] != '\0')
					new[k] = s[i];
				return (new);
			}
		}
	}
}

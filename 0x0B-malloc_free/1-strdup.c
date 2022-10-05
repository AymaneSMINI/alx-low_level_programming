#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function
 * @str: string pointer
 * Return: string
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int len;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc((i + 1) * (sizeof(char)));
	if (s == NULL)
		return (NULL);
	len = i;
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}

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

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(i * (sizeof(char)));
	if (s == NULL)
		return (NULL);
	len = i;
	for(i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}

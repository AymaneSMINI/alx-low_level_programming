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
	int len;
	int i;
	char *s;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	s = malloc(len * (sizeof(char)));
	if (s == NULL)
		return (NULL);
	s = str;
	return (s);
}

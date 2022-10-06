#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function
 * @s1: string
 * @s2: string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	char *s;

	len1 = len2 = 0;
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			len1++;
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
			len2++;
	}
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (; i < (len1 + len2); i++)
		s[i] = s2[i - len1];
	s[i] = '\0';
	return (s);
}

#include "main.h"
/**
 * leet - function
 * @str: char pointer
 * Return: char value
 */
char *leet(char *str)
{
	char l[5] = {'a','e','o','t','l'};
	char u[5] = {'A','E','O','T','L'};
	int *values = {52,51,48,55,49};	//ascii code

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == l[j] || str[i] == u[j])
			{
				str[i] = values[j];
			}
		}
	}
	return (str);
}

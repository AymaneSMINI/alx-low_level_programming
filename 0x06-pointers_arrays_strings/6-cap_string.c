#include "main.h"
/**
 * cap_string - function
 * @str: pointer
 * Return: char value
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] < 123 && str[i] > 96)
			str[i] = str[i] - 32;
		if (str[i] == '\t' || str[i] == '\n' || str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] < 123 && str[i + 1] > 96)
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isnumber - function
 * @n: integer
 * Return: 0 or 1
 */
int isnumber(char *n)
{
	int i;

	i = 0;
	if (n[0] == '-')
		i = 1;
	while (n[i] != '\0')
	{
		if (!isdigit(n[i]))
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - main
 * @argc: integer
 * @argv: string pointer
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int result;
	int i;

	result = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isnumber(argv[i]))
				result = result + atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", result);
	return (0);
}

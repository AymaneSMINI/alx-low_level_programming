#include <stdio.h>
#include <stdlib.h>
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
		for(i = 1; i < argc; i++)
		{
			if(atoi(argv[i]))
			       result = result + atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", result);
	return (0);
}

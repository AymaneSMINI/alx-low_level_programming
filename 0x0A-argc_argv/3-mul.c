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

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}

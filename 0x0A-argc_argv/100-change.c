#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * change - function
 * @number: integer
 * Return: integer
 */
int change(int number)
{
	int result;

	result = 0;
	if (number >= 25)
	{
		result = number / 25;
		number = number % 25;
	}
	if (number >= 10)
	{
		result = result + number / 10;
		number = number % 10;
	}
	if (number >= 5)
	{
		result = result + number / 5;
		number = number % 5;
	}
	if (number >= 2)
	{
		result = result + number / 2;
		number = number % 2;
	}
	result = result + number;
	return (result);
}
/**
 * main - check code
 * @argc: integer
 * @argv: string
 * Return: integer
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
		printf("%d\n",change(atoi(argv[1])));
	return (0);
}

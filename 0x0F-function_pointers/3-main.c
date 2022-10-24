#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main
 * @argv: string
 * @argc: integer
 * Rertrn: nothing
 */
int main(int argc, char *argv[])
{
	int (*function)(int, int);
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];
	printf("%d \n",*operator);
	if (argc != 4)
	{
		printf("Error 1\n");
		exit (98);
	}
	function = get_op_func(operator);
	if (function == NULL)
	{
		printf("Error 2\n");
		exit (98);
	}
	if (*operator == '/' && num2 == 0)
	{
		printf("Error 3\n");
		exit (100);
	}
	printf("%d\n", function(num1, num2));
	return (0);
}

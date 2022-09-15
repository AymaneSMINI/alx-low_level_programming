#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main file
 * Description :'negative positive'
 * @n : int argument
 * Return: 0 (Success)
 */
void main(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

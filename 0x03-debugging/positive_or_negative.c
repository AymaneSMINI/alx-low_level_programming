#include <stdlib.h>
#include <stdio.h>
/**
 * positive_or_negative - function file
 * Description :'negative positive'
 * @n : int argument
 * Return: 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

#include <stdlib.h>
#include <time.h>
/*
 * main - main file
 * negative positive
 * Return: Always 0  (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%d",n," is positive");
	else if (n<0)
		printf("%d",n," is negative");
	else
		print("%d",n," is zero");
	return (0);
}

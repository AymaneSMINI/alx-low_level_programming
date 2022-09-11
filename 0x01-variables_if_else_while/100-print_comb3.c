#include <stdlib.h>
#include <stdio.h>
/**
 * main - file
 * Description: print 100 combin
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i+1; j <= '9'; j++)
		{	if (i != '8' || j != '9')
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

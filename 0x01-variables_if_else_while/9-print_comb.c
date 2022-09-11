#include <stdio.h>
#include <stdlib.h>
/**
 * main -file
 * Description: printcomb
 * Return: 0 (Success)
 */
int main(void)
{
	char combin;

	for (combin = '0'; combin <= '9'; combin++)
	{
		putchar(combin);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

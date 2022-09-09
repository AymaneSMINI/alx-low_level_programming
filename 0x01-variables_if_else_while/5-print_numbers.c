#include <stdio.h>
#include <stdlib.h>
/**
*main - file
*Description: print numbers
*Return: 0 (Success)
*/
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	putchar('\n');
	return (0);
}

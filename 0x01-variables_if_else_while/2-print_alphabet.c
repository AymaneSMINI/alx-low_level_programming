#include <stdlib.h>
#include <stdio.h>
/**
 * main - file
 * Description : alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	for (alpha = 'a'; alpha <= 'z' ; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - file
 * Description: print alphabet
 * Return : 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{	if ((alpha != 'q') && (alpha != 'e'))
			putchar(alpha);
	}
	return (0);
}

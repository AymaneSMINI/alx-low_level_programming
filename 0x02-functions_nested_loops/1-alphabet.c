#include <stdio.h>
#include <stdlib.h>
/**
 * main - file
 * Description: "Print _putchar"
 * Return: 0 Always (Success)
 */
void print_alphabet(void)
{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}

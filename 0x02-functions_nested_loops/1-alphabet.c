#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - file
 * Description: "Print _putchar"
 * Return: 0 Always (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}

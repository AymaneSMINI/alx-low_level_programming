#include "main.h"
/**
 * print_alphabet - void function
 * print lowercase alphabet
 * Return: nothing (Success).
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}

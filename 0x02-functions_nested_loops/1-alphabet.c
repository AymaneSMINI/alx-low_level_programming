#include "main.h"
/**
 *function - print_alphabet
 *Description: 'Print _putchar'
 * Return: nothing (Success)
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}

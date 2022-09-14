#include "main.h"
/**
 *main - file
 *Description: "Print _putchar"
 *Return: 0 Always (Success)
 */
int main(void)
{
	int i;
	char word[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}

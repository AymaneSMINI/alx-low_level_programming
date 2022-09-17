#include "main.h"
/**
 * fizz_buzz - function
 * Return: print
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 5 && i % 3)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
			_putchar(' ');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else
		{
			if( i >= 10)
				_putchar(i / 10);
			_putchar(i % 10);
			_putchar(' ');
		}
	}
		_putchar('\n');
}

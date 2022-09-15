#include "main.h"
/**
 * print_long - long number
 * @n: int argument
 * Return: nothing
 */
void print_long(int n)
{
	 if (n != 0)
	{   print_long(n / 10);
		_putchar(48 + (n % 10));

	}
}
/**
 * print_to_98(int n)
 * @n : int argument
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
		    if (i != n)
                _putchar(',');
                _putchar(' ');
			if (i < 0)
            {
				_putchar('-');
				print_long(-i);}
            else if (i == 0)
                _putchar(48);
            else
                print_long(i);


		}
	}
	else
	{
		for (i = n; i >= 98; i--)
        {
            if (i != n)
                _putchar(',');
            print_long(i);

		}


	}
	_putchar('\n');
}

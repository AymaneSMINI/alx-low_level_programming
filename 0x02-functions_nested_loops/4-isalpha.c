#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _isalpha(int c)
{
    if (isalpha(c) > 0)
        return (1);
    else 
        return (0);
}
int main(void)
{
    int r;

   r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

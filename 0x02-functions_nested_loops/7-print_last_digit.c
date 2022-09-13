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
int print_last_digit(int n)
{   
    int r;
    
    return n % 10;
}
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}

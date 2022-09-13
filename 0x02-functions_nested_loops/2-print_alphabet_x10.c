#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - file
 * Description: "Print alphabet x 10"
 * Return: 0 Always (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet_x10(void)
{
    int alpha;
    int i;
    
    for (i = 0; i < 10; i++)
    {
    	for (alpha = 'a'; alpha <= 'z'; alpha++)
    	{
    	    _putchar(alpha);
    	}
    	_putchar('\n');
	}
}
int main(void)
{
	print_alphabet_x10();
	return (0);
}

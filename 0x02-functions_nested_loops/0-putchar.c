#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * main - file
 * Description: "Print _putchar"
 * Return: 0 Always (Success)
 *
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int i;
	char word[] = "_putchar";
	
	for (i = 0; i < sizeof(word); i++)
	    _putchar(word[i]);
	return (0);
}

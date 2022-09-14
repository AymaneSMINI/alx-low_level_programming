#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * 
 * main - file
 * Description: "Print _putchar"
 * Return: 0 Always (Success)
 */

int main(void)
{
	long i;
	char word[] = "_putchar";
	
	for (i = 0; i < sizeof(word); i++)
	    _putchar(word[i]);
	return (0);
}

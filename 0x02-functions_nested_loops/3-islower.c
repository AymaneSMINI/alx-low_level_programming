#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * lower - int function
 * islower
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
		return (0);
}

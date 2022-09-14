#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * lower - int function
 * @c: an int argument
 * Description: check if lower
 * islower
 * Return: 1 if lower 0 if not
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

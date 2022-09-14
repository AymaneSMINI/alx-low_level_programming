#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check if alpha.
 * @c: int argument
 * Return: 1 if is alpha 0 if not.
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}

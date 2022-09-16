#include "main.h"
/**
 * _isdigit - function
 * @c: int argument
 * Return: 1 if upper 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

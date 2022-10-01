#include "main.h"
/**
 * square - function
 * @n: int
 * @i: int
 * Return: value
 */
int square(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (square(i + 1, n));
}
/**
 * _sqrt_recursion - function
 * @n : int argument
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (square(1, n));
}

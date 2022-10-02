#include "main.h"
/**
 * prime - function
 * @i: integer
 * @n: integer
 * Return: value
 */
int prime(int i, int n)
{
	if (n % i == 0)
		return (0);
	else if (i == (n - 1))
		return (1);
	else
		return (prime(i + 1, n));
}
/**
 * is_prime_number - function
 * @n: int argument
 * Return: integer value
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(2, n));
}

#include "main.h"
/**
 * binary_to_uint - function
 * @b: char pointer
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	int length, i, sum, p;

	if (b == NULL)
		return (0);
	sum = 0;
	length = strlen(b) - 1;
	for (i = length, p = 1; i >= 0; i--, p*=2)
	{
		if (b[i] > 57 || b[i] < 48)
			return (0);
		if (b[i] & 1)
			sum += p;
	}
	return (sum);
}

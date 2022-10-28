#include "main.h"
#include <math.h>
/**
 * binary_to_uint - function
 * @b: char pointer
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	int length, i, sum;
	unsigned int bits;

	if (b == NULL)
		return (0);
	sum = 0;
	length = strlen(b) - 1;
	bits = atoi(b);
	for (i = 0; i <= length; i++)
	{
		if (b[length - i] > 57 || b[length - i] < 48)
			return (0);
		sum = sum + (bits % 10) * pow(2, i);
		bits = bits / 10;
	}
	return (sum);
}

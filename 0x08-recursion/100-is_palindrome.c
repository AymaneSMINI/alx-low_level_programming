#include "main.h"
#include <string.h>
/**
 * palindrome - function
 * @i: integer
 * @len: integer
 * @s: string
 * Return: 0 or 1
 */
int palindrome(int i, int len, char *s)
{
	if (s[i] != s[len])
		return (0);
	else if (i >= len)
		return (1);
	else
		return (palindrome(i + 1, len - 1, s));
}
/**
 * is_palindrome - function
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	return (palindrome(0, len - 1, s));
}

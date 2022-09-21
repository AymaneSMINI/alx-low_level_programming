#include "main.h"
#include <string.h>
/**
 * _strcmp - function
 * @s1: char pointer
 * @s2: char pointer
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = strcmp(s1, s2);
	return (cmp);
}

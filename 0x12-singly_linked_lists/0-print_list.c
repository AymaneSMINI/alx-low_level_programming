#include "lists.h"

/**
 * print_list - the function print a list
 * @h: header format list_t
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	list_t *tmp;
	size_t count = 0;

	for (tmp = (list_t *) h; tmp != NULL; tmp = tmp->next)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", tmp->len, tmp->str);
		}
		count++;
	}
	return (count);
}

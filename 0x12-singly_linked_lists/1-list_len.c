#include "lists.h"

/**
 * list_len - the function print a list
 * @h: header format list_t
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	list_t *tmp;
	size_t count = 0;

	for (tmp = (list_t *) h; tmp != NULL; tmp = tmp->next)
	{
		count++;
	}
	return (count);
}

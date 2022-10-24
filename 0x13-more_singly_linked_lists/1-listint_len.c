#include "lists.h"
/**
 * listint_len - function
 * @h: header type listint
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	listint_t *current;
	size_t counter = 0;

	for (current = (listint_t *) h; current; current = current->next)
	{
		counter++;
	}
	return (counter);
}

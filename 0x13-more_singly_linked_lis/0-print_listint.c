#include "lists.h"
/**
 * print_listint - function
 * @h: header type listint
 * Return: length
 */
size_t print_listint(const listint_t *h)
{
	listint_t *current;
	size_t counter = 0;

	for (current = (listint_t *) h; current; current = current->next)
	{
		printf("%d\n", current->n);
		counter++;
	}
	return (counter);
}

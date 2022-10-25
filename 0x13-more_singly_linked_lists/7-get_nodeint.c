#include "lists.h"
/**
 * get_nodeint_at_index - function
 * @head: pointer
 * @index: integer
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = head;
	for (i = 0; i < index && node != NULL; i++)
	{
		node = node->next;
	}
	return (node);
}

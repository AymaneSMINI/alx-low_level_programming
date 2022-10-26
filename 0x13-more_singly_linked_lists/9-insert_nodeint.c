#include "lists.h"
/**
 * insert_nodeint_at_index - function
 * @head: unsigned
 * @n: int
 * Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, length = 0;
	listint_t *current, *new, *tmp;

	current = *head;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	current = *head;
	if (current == NULL)
	{
		if (idx != 0)
			return (NULL);
		current = new;
	}
	else
	{
		for (tmp = *head; tmp; tmp = tmp->next)
			length++;
		if (idx > length)
			return (NULL);
		else if (idx == 0)
		{
			new->next = current;
			current = new;
		}
		else
		{
			for (i = 0; i < (idx - 1); i++)
			{
				current = current->next;
			}
			new->next = current->next;
			current->next = new;
		}
	}
	return (*head);
}

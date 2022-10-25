#include "lists.h"
/**
 * insert_nodeint_at_index - function
 * @head: unsigned
 * @n: int
 * Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	current = *head;
	if (current == NULL)
	{
		current = new;
	}
	else
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
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

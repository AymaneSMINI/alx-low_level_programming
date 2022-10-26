#include "lists.h"
/**
 * insert_nodeint_at_index - function
 * @head: unsigned
 * @n: int
 * @idx: unsigned int
 * Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, length = 0;
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		if (idx != 0)
			return (NULL);
		*head = new;
	}
	else
	{
		for (tmp = *head; tmp; tmp = tmp->next)
			length++;
		if (idx > length)
			return (NULL);
		else if (idx == 0)
		{
			new->next = *head;
			*head = new;
		}
		else
		{
			tmp = *head;
			for (i = 0; i < (idx - 1); i++)
			{
				tmp = tmp->next;
			}
			new->next = tmp->next;
			tmp->next = new;
		}
	}
	return (new);
}
